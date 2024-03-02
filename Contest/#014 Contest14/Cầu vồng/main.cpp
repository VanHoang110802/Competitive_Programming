#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k, m, p;
int64_t E, cur_t = 0, t, t1, ans = 0, mine = 0;
vector<int> fw, a, y;

int64_t d_e(int64_t x, int tm)
{
    int64_t b = x / tm;
    int64_t r = x % tm;
    return (tm - r) * b * b + r * (b + 1) * (b + 1);
}

void ins_fw(int x)
{
    while(x <= n) ++fw[x], x += x & (-x);
}

int sum_fw(int x)
{
    int r = 0;
    while(x > 0)
    {
        r += fw[x];
        x &= (x - 1);
    }
    return r;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> E;
    fw.resize(n + 2, 0);
    a.resize(n + 2, 0);
    for(int i = 1; i <= n; ++i)
    {
        cin >> k;
        ins_fw(k);
        m = i - sum_fw(k);
        ++a[m];
    }
    a[0] = 0;
    for(int i = n; i > 0; --i)
    {
        if(a[i])
        {
            p = i;
            break;
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        if(a[i])
        {
            mine += (int64_t)(i) * a[i];
            y.push_back(i);
        }
    }
    for(int i = p; i > 0; --i)
    {
        if(a[i]) cur_t += (int64_t)(i) * i * a[i];
    }
    if(E < mine)
    {
        cout << -1;
        return 0;
    }
    int u, v;
    int64_t lf, rt, mid, e, cnt, s;
    ans = -1;
    lf = 1;
    rt = (int64_t)(n) * n;
    while(rt - lf >= 0)
    {
        mid = (lf + rt) / 2;
        cnt = 0;
        e = 0;
        s = 0;
        u = 1;
        v = 1;
        for(int i = 0; i < y.size(); ++i)
        {
            while(u < y[i] && d_e(y[i], u) - d_e(y[i], u + 1) > mid) u++;
            v = max(v, u);
            while(v < y[i] && d_e(y[i],v) - d_e(y[i], v + 1) >= mid) v++;
            e += a[y[i]] * d_e (y[i], v);
            s += a[y[i]] * v;
            if(v > 1 && d_e(y[i], v - 1) - d_e(y[i], v) == mid) cnt += a[y[i]] * (v - u);
        }
        if(e <= E)
        {
            ans = s - min((E - e) / mid, cnt);
            lf = mid + 1;
        }
        else rt = mid - 1;
    }
    cout << ans;
    return 0;
}
