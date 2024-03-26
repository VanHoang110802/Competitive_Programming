#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 1e4 + 7;
vector<int> num[MAXN];
bool check[MAXN];
int n, m;

void dfs(int u)
{
    check[u] = true;
    cout << u << ' ';
    for(auto v : num[u])
    {
        if(!check[v])
        {
            dfs(v);
        }
    }
}

void XuLy()
{
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
        int u, v; cin >> u >> v;
        num[u].push_back(v);
    }
    dfs(1);
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
