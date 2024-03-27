#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_N = 1005;
const int inf = 1000000007;
int dp[MAX_N][MAX_N][2];
int a[MAX_N][MAX_N];

void XuLy()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            dp[i][j][0] = dp[i][j][1] = inf;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i][0][0] = 0;
    }
    for (int j = 1; j <= m; j++)
    {
        dp[0][j][1] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j][0] = min(dp[i - 1][j][0], dp[i - 1][j][1] + a[i][j]);
            dp[i][j][1] = min(dp[i][j - 1][0] + a[i][j], dp[i][j - 1][1]);
        }
    }
    cout << min(dp[n][m][0], dp[n][m][1]) << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    cin >> test;
    while(test--)
    {
        XuLy();
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
