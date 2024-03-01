#include <bits/stdc++.h>
using namespace std;

struct ans
{
    int cnt;
    int p, m;
    ans(int cnt = 0, int p = 0, int m = 0): cnt(cnt), p(p), m(m) {}
};

int md(int a, int b)
{
    a %= b;
    if (a < 0)a += b;
    return a;
}
int fnd(int a, int k)
{
    int x = md(a, (1 << (k + 1)));
    if (x > (1 << k))x -= (1 << (k + 1));
    return x;
}

ans dp[20];
int n;
const int INF = 1e6;

int main()
{
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin>> a[i];
    sort(a.begin(),a.end());
    ans res(INF, 0, 0);
    for (int i = 0; i < 20; ++i)
    {
        vector<int> vv;
        int fl = 0;
        int fl2 = 0;
        for (int j = 0; j < n; ++j)
        {
            int x = fnd(a[j], i);
            if (x == (1 << i))
            {
                fl = 1;
                break;
            }
            if (x != a[j]) fl2 = 1;
            vv.push_back(x);
        }
        dp[i] = ans(INF, 0, 0);
        if (fl) continue;
        sort(vv.begin(), vv.end());
        vv.resize(unique(vv.begin(), vv.end()) - vv.begin());
        if (vv.back() - vv.front() < (1 << i))
        {
            int x = max(vv.back(), 0);
            dp[i] = ans(i, 0, 0);
            for (int k = 0; k < i; ++k)
                if ((x >> k) & 1) dp[i].p |= (1 << k);
                else dp[i].m |= (1 << k);
        }
        for (int j = 0; j < i; ++j)
        {
            if (dp[j].cnt == INF) continue;
            int mn = 0, mx = 0;
            for (int x: vv)
            {
                x -= fnd(x, j);
                mn = min(mn, x >> (j + 1));
                mx = max(mx, x >> (j + 1));
            }
            if (dp[j].cnt+i-j-1<dp[i].cnt && mx - mn < (1 << (i - j - 1)))
            {
                dp[i] = dp[j];
                dp[i].cnt += i - j - 1;
                for (int k = 0; k < i - j - 1; ++k)
                    if ((mx >> k) & 1) dp[i].p |= (1 << (k + j + 1));
                    else dp[i].m |= (1 << (k + j + 1));
            }
        }
        if (!fl2)
            if (dp[i].cnt < res.cnt) res = dp[i];
    }
    cout << res.cnt << '\n';
    int cur = res.p;
    int cc = 0;
    while (cur)
    {
        if (cur & 1) cout << (1 << cc) << ' ';
        ++cc;
        cur >>= 1;
    }
    cur = res.m;
    cc = 0;
    while (cur)
    {
        if (cur & 1) cout << -(1 << cc) << " ";
        ++cc;
        cur >>= 1;
    }
    return 0;
}
