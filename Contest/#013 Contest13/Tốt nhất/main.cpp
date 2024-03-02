#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> pii;
int n,m,p=1,q;
int64_t ans=0,t;
vector<int64_t> f;

void get_q()
{
    q = m + 1;
    for(int i = p + 1; i <= m + 1; i += 2)
    {
        if(f[i] - f[p - 1] > 0)
        {
            ans = max(ans, f[i] - f[p - 1]);
        }
        if(f[i] - f[p - 1] < 0)
        {
            q = i - 1;
            break;
        }
    }
    return;
}

signed main()
{
    cin >> n;
    vector<int64_t> a(n),b;
    p = -1;
    t = 0;
    q = 1;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) if(a[i] > 0)
        {
            p = i;
            break;
        }
    if(p < 0)
    {
        cout << '0';
        return 0;
    }
    while(p < n)
    {
        if(a[p] * q >= 0) t += a[p++];
        else
        {
            b.push_back(t);
            t = a[p++];
            q = -q;
        }
        if(p == n)
        {
            b.push_back(t);
            break;
        }
    }
    m = b.size();
    f.resize(m + 2);
    f[0] = 0;
    f[m + 1] = -1e16;
    ans = b[0];
    p = 1;
    for(int i = 0; i < b.size(); i += 2) ans = max(ans, b[i]);
    for(int i = 0; i < m; ++i) f[i + 1] = f[i] + b[i];
    while(q <= m)
    {
        get_q();
        ans = max(ans, f[q] - f[p - 1]);
        if((q & 1) == 0)p = q + 1;
        else p = q + 2;
    }
    cout << ans;
    return 0;
}
