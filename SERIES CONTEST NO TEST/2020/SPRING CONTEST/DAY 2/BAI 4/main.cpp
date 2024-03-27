#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_N = 32;
int a[MAX_N], sum[MAX_N];
int dp[MAX_N][MAX_N][MAX_N];

void XuLy()
{
    int n, K, T;
    cin >> n >> K >> T;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int cur = 0; cur < MAX_N; cur++)
        {
            for (int op = 0; op < MAX_N; op++)
            {
                dp[i][cur][op] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int cur = 0; cur < MAX_N; cur++)
        {
            for (int op = 0; op < MAX_N; op++)
            {
                for (int x = 0; x <= cur && x <= i - 1; x++)
                {
                    dp[i][cur][op] = max(dp[i][cur][op], sum[i] - dp[i - 1 - x][op][cur - x]);
                }
            }
        }
    }
    int first = dp[n][K][T];
    int second = sum[n] - first;
    if (first < second)
    {
        cout << "LOSE";
    }
    else if (first > second)
    {
        cout << "WIN";
    }
    else
    {
        cout << "DRAW";
    }
    cout << '\n';
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
