#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, ans = -1e18; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i)
    {
        for(int j = i + 1; j <= n; ++j)
        {
            for(int k = j + 1; k <= n; ++k)
            {
                ans = max(a[i] + a[j] - a[k], ans);
            }
        }
    }
    cout << ans << '\n';
    return 0;
}

/*
5
2 -5 4 -6 9

2 -5 4  = -7        (1, 2, 3)
2 -5 -6 = 3         (1, 2, 4)
2 -5 9  = -12       (1, 2, 5)
2 4 -6  = 12        (1, 3, 4)
2 4 9   = -3        (1, 3, 5)
2 -6 9  = -13       (1, 4, 5)
-5 4 -6 = 5         (2, 3, 4)
-5 4 9  = -10       (2, 3, 5)
4 -6 9  = -11       (3, 4, 5)

*/
