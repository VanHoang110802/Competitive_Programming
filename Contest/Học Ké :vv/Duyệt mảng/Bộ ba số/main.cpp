#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e6 + 7;
int a[MAXN], prefix[MAXN], suff[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, ans = 0; cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        prefix[i] = max(prefix[i + 1], a[i]);
    }
    for(int i = n; i >= 1; --i)
    {
        suff[i] = max(suff[i + 1], a[i]);
    }
    for(int i = 2; i <= n - 1; ++i)
    {
        ans = max(ans, (2 * prefix[i - 1] - 3 * a[i] + 5 * suff[i + 1]));
    }
    cout << ans << '\n';
    return 0;
}
