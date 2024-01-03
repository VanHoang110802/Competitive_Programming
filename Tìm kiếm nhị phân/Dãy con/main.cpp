#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 5 * 1e5 + 7;
int t[MAXN];
int n, s, ans;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    for(int i = 1; i <= n; ++i)
    {
        int x; cin >> x;
        t[i] = t[i - 1] + x;
    }
    ans = n;
    for(int r = 1; r <= n; ++r)
    {
        if(t[r] >= s)
        {
            int k = upper_bound(t, t + n + 1, t[r] - s) - t - 1;
            ans = min(ans, r - k);
        }
    }
    cout << ans << '\n';
    return 0;
}

