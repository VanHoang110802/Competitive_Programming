#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX_N = 55;

int dp[MAX_N][MAX_N];
vector <int> save[MAX_N];
int color[MAX_N], sweet[MAX_N];

bool comp(int a, int b)
{
    return a > b;
}

void XuLy()
{
    int n, K;
    cin >> n >> K;
    for (int i = 0; i < n; i++)
    {
        cin >> color[i] >> sweet[i];
    }
    for (int i = 0; i < MAX_N; i++)
    {
        save[i].clear();
    }
    for (int i = 0; i < n; i++)
    {
        save[color[i]].push_back(sweet[i]);
    }
    for (int i = 1; i <= 50; i++)
    {
        sort(save[i].begin(), save[i].end(), comp);
    }
    for (int i = 0; i < MAX_N; i++)
    {
        for (int j = 0; j < MAX_N; j++)
        {
            dp[i][j] = -1;
        }
    }
    dp[0][0] = 0;
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j <= 2 * K; j++)
        {
            if (dp[i][j] == -1)
            {
                continue;
            }
            int sum = 0;
            for (int jj = 0; jj <= (int) save[i + 1].size() && jj <= 2 * K - j && jj <= K; jj++)
            {
                if (jj > 0)
                {
                    sum += save[i + 1][jj - 1];
                }
                if (dp[i + 1][j + jj] < dp[i][j] + sum)
                {
                    dp[i + 1][j + jj] = dp[i][j] + sum;
                }
            }
        }
    }
    cout << dp[50][2 * K] << endl;
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
