#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <functional>
using namespace std;

typedef tuple<int64_t, int, int> tlii;
const int64_t MXLL = (int64_t)1e18;
int n, m, t, il = 0, ir = 0, p, q;
int64_t ans = -MXLL;
vector<int64_t>s, h;
vector<tlii> b;
bool flag = false;

void get_q()
{
    for(int i = p; i <= n + 1; ++i)
    {
        if(h[i] != 0)
        {
            q = i - 1;
            return;
        }
    }
}

void get_p(int x)
{
    p = -1;
    for(int i = x + 1; i <= n; ++i)
    {
        if(h[i] == 0)
        {
            p = i;
            break;
        }
    }
}

signed main()
{
    cin >> n;
    h.resize(n + 2);
    ans = -MXLL;
    for(int i = 1; i <= n; ++i)
    {
        cin >> h[i];
        if(ans < h[i])
        {
            ans = h[i];
            il = i;
            ir = i;
        }
    }
    if(ans < 0)
    {
        cout << ans << '\n' << il << ' ' << ir;
        return 0;
    }
    h[n + 1] = h[n] >= 0 ? -1 : 1;
    if(ans == 0)
    {
        p = il;
        while(p > 0)
        {
            get_q();
            if(q - p > ir - il) il = p, ir = q;
            get_p(q + 1);
        }
        cout << ans << '\n' << il << ' ' << ir;
        return 0;
    }
    m = 1;
    p = 1;
    q = 0;
    b.push_back(make_tuple(0, 0, 0));
    while(m <= n)
    {
        if((h[m] >= 0 && h[m + 1] >= 0)||(h[m] < 0 && h[m + 1] < 0)) ++m;
        else
        {
            t = 0;
            for(int i = p; i <= m; ++i) t += h[i];
            b.push_back(make_tuple(t, p, m));
            p = ++m;
        }
    }
    m = b.size();
    b.push_back(make_tuple(-MXLL, n + 1, n + 1));
    s.resize(m + 2);
    s[0] = 0;
    for(int i = 1; i < m; ++i)
    {
        t = get<0>(b[i]);
        if(ans < t)ans = t, il = ir = i;
        s[i] = s[i - 1] + t;
    }
    s[m] = -MXLL;
    p = 1;
    if(get<0>(b[1]) < 0) p = 2;
    ans = 0;
    q = p;
    for(int i = p; i < m; ++i)
    {
        t = get<0>(b[i]);
        if(t > ans ||(t == ans && i - p > ir - il)) ans = t, il = i, ir = i, flag = true;
    }
    for(int i = p; i < m; i += 2)
    {
        if(get<0>(b[i]) + get<0>(b[i + 1]) >= 0) q = i;
        else
        {
            t = s[i] - s[p - 1];
            if(t >= 0)q = i;
            if(t > ans ||(t == ans && i - p > ir - il))
            {
                ans = t;
                il = p;
                ir = q;
                flag = true;
            }
            if(s[i + 1] - s[p] < 0) p = i + 2;
        }
    }
    if(flag) cout << ans << '\n' << get<1>(b[il]) << ' ' << get<2>(b[ir]);
    else cout << ans << '\n' << il << ' ' << ir;
    return 0;
}
