#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

#define int long long
const int mod = 1e9 + 7;

int countWays(int N, int K)
{
    if(K > N / 2) return 0;
    int dp[N + 1][K + 1];
    dp[0][0] = 1;
    dp[1][0] = 1;
    dp[1][1] = 1;
    for(int i = 2; i <= N; i++)
    {
        for(int j = 0; j <= K; j++)
        {
            dp[i][j] = ((dp[i - 1][j] % mod) + (dp[i - 2][j - 1] % mod)) % mod;
        }
    }
    return dp[N][K];
}

void XuLy()
{
    int N, K;
    cin >> N >> K;
    cout << countWays(N, K) << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    XuLy();
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
