#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+5;
long long n, m, x, y;
long long a[MAXN], F[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i = 1; i <= n; ++i) cin >> a[i];
    F[0] = 0;
    for(long long i = 1; i <= n; ++i)
    {
        F[i] = F[i - 1] + a[i];
    }
    cin >> m;
    long long s = 0;
    for(long long i = 1; i <= m; ++i)
    {
        cin >> x >> y;
        s = F[y] - F[x - 1];
        cout << s << '\n';
    }

    return 0;
}
