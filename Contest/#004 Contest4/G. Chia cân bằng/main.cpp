#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+5;
long long n;
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
    int cnt = 0;
    for(long long j = 2; j <= n; ++j)
    {
        for(long long i = 1; i < j; ++i)
        {
            if(F[i] == (F[n] - F[j - 1])) cnt++;
        }
    }
    cout << cnt;
    return 0;
}
