/*
5 8
3 5 6 5 3

4
*/
#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 5 * 1e5 + 7;
int a[MAXN];
int n, B, ans;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> B;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 2; i <= n; ++i)
    {
        int j1 = lower_bound(a + 1, a + i, B - a[i]) - a;
        int j2 = upper_bound(a + 1, a + i, B - a[i]) - a - 1;
        if(j1 <= j2)
        {
            ans += (j2 - j1 + 1);
        }
    }
    cout << ans << '\n';
    return 0;
}
