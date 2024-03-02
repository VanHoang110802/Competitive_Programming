#include <bits/stdc++.h>
using namespace std;

int a[101][101], visited[101][101], dp[101][101], n, m, tmp[101][101], ans;
int dx[3] = {-1, 0, 1};
int dy[3] = {1, 1, 1};

void inp()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++)
    {
        visited[i][n] = true;
        dp[i][n] = a[i][n];
    }
}

int dfs(int i, int j)
{
    tmp[i][j] = INT_MIN;
    visited[i][j] = true;
    for (int k = 0; k <= 2; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if ((i1 >= 1 && i1 <= m) && (j1 >= 1 && j1 <= n))
        {
            if (visited[i1][j1])
                tmp[i][j] = max(tmp[i][j], dp[i1][j1]);
            else
                tmp[i][j] = max(tmp[i][j], dfs(i1, j1));
        }
    }
    dp[i][j] = a[i][j] + tmp[i][j];
    return dp[i][j];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    inp();
    for (int i = 1; i <= m; i++)
        dfs(i, 1);
    for (int i = 1; i <= m; i++)
        ans = max(ans, dp[i][1]);
    cout << ans << '\n';
    return 0;
}
