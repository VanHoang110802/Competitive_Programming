#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 1e3 + 7;
int a[MAXN], b[MAXN], c[MAXN];
int n, ans;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) cin >> b[i];
    for(int i = 1; i <= n; ++i) cin >> c[i];
    sort(c + 1, c + n + 1);
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            int k1 = upper_bound(c + 1, c + n + 1, abs(a[i] - b[j])) - c;
            int k2 = lower_bound(c + 1, c + n + 1, (a[i] + b[j])) - c - 1;
            if(k1 <= k2) ans += (k2 - k1 + 1);
        }
    }
    cout << ans << '\n';
    return 0;
}
