#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_N = 105;
int dp[MAX_N][MAX_N][MAX_N];

void XuLy()
{
    int n, m;
    cin >> n >> m;
    dp[0][0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int b = i; b >= 0; b--)
        {
            for (int a = 0; a <= b; a++)
            {
                if (b == i)
                {
                    dp[i][a][b] = dp[a][0][0];
                }
                else
                {
                    dp[i][a][b] = 0;
                    for (int x = 1; x <= min(m, i - b); x++)
                    {
                        dp[i][a][b] = max(dp[i][a][b], i - dp[i][b - a][b + x]);
                    }
                }
            }
        }
    }
    cout << dp[n][0][0] << '\n';
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
