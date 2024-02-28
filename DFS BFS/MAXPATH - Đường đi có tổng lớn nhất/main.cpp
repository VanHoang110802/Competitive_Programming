#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e2 + 7;
int a[MAXN][MAXN];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, x = -1e9;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) for(int j = 1; j <= m; ++j) cin >> a[i][j];
    for (int i = 0; i <= n; i++)
    {
        a[0][i] = -1e9;
        a[m + 1][i] = -1e9;
    }
    for(int j = 1; j <= m; ++j)
    {
        for(int i = 1; i <= n; ++i)
        {
            a[i][j] = a[i][j] + max(a[i - 1][j - 1], max(a[i][j - 1], a[i + 1][j - 1]));
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        x = max(x, a[i][m]);
    }
    cout << x << '\n';
    return 0;
}
