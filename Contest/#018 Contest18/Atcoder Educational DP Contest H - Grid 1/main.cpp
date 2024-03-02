#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int mod = 1e9 + 7;
const int MAXH = 1e4 + 7;
const int MAXC = 1e4 + 7;
int h, c;
char a[MAXH][MAXC];
bool check[MAXH][MAXC];
int dp[MAXH][MAXC];

int dfs(int i, int j)
{
    check[i][j] = true;
    if(i == h && j == c)
    {
        return dp[h][c] = 1;
    }
    if(j + 1 <= c && check[i][j + 1])
    {
        dp[i][j] += dp[i][j + 1];
    }
    else if(j + 1 <= c)
    {
        dp[i][j] += dfs(i, j + 1);
    }
    if(i + 1 <= h && check[i + 1][j])
    {
        dp[i][j] += dp[i + 1][j];
    }
    else if(i + 1 <= h)
    {
        dp[i][j] += dfs(i + 1, j);
    }
    return dp[i][j] % mod;
}

void inp()
{
    cin >> h >> c;
    for(int i = 1; i <= h; ++i)
    {
        for(int j = 1; j <= c; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] == '#') check[i][j] = true;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    inp();
    cout << dfs(1, 1);
    return 0;
}
