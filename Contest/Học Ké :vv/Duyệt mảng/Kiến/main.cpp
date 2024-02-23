#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, ans = -1e18; cin >> n >> k;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if(a[i] < 0) ans = max(ans, abs(a[i]));
        else ans = max(ans, k - a[i]);
    }
    cout << ans << '\n';
    return 0;
}
