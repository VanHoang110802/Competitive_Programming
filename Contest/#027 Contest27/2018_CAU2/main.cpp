#include <bits/stdc++.h>
using namespace std;
const long long MAXN = 1e6;
long long dem[MAXN];
int main()
{
    freopen("CAU2.INP", "r", stdin);
    freopen("CAU2.OUT",  "w", stdout);
    long long n; cin >> n;
    long long a[n];
    for(long long i=1;i<=n;++i) cin >> a[i];
    for(long long i=1;i<=n;++i)
    {
        if(a[i] >= 0) dem[a[i]]++;
    }
    long long ans = 0;
    for(long long i=1;i<=n;++i)
    {
        if(a[i] < 0) ans += dem[-a[i]]++;
    }
    ans += dem[0] * (dem[0] - 1)/ 2;
    cout << ans;
    return 0;
}
