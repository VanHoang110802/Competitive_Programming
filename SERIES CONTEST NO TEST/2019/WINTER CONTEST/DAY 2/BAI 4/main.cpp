#include <iostream>
#include <iomanip>
using namespace std;

const long long MOD = 1000000007;
const int MAX_N = 1005;
long long dp[MAX_N][MAX_N];

void XuLy()
{
    int n;
    cin >> n;
    dp[0][0] = 1LL;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = dp[i - 1][j - 1];
            if (j < i)
            {
                (dp[i][j] += (1LL * j * dp[i - 1][j]) % MOD) %= MOD;
            }
        }
    }
    long long res = 0LL;
    for (int i = 1; i <= n; i++)
    {
        (res += dp[n][i]) %= MOD;
    }
    cout << res << '\n';
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
