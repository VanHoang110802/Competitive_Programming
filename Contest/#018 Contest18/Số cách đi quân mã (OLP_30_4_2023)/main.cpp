#include <iostream>
#include <algorithm>
using namespace std;

#define int long long int
const int mod = 1e9;
const int MAXH = 1e3 + 7;
const int MAXC = 1e3 + 7;
int n, m, k, q;
int a[MAXH][MAXC];
bool check[MAXH][MAXC];
long long dp[MAXH][MAXC];

int xx[4]= {-1, 1, 2, 2};
int yy[4]= {2, 2, 1, -1};

int dfs(int x, int y)
{
    check[x][y] = true;
    for(int i = 0; i < 4; ++i)
    {
        int a = x + xx[i];
        int b = y + yy[i];

        if(((a >= 1 && a <= n) && (b >= 1 && b <= m)) && check[a][b])
        {
            dp[x][y] = ((dp[x][y] % mod) + (dp[a][b] % mod)) % mod;
        }
        else if(((a >= 1 && a <= n) && (b >= 1 && b <= m)))
        {
            dp[x][y] = ((dp[x][y] % mod) + (dfs(a, b) % mod)) % mod;
        }
    }
    return dp[x][y];
}

signed main()
{
    freopen("SOCACH.inp", "r", stdin);
    freopen("SOCACH.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k >> q;
    while(k--)
    {
        int x, y;
        cin >> x >> y;
        check[x][y] = true;
    }
    check[n][m] = true;
    dp[n][m] = 1;
    while(q--)
    {
        int x, y;
        cin >> x >> y;
        if(check[x][y]) cout << dp[x][y] << '\n';
        else cout << dfs(x, y) << '\n';
    }
    return 0;
}


/*
4 5 1 1
2 4
1 2

4 5 1 2
2 4
1 2
3 3

4 5 1 3
2 4
1 2
3 3
2 4

4 5 0 2
1 2
3 3

*/
