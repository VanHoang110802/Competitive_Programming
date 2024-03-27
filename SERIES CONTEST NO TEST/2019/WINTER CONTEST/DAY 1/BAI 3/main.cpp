#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

const int MAX_N = 100005;
vector <int> adj[MAX_N];
bool mark[MAX_N];
int cnt;

void dfs(int u)
{
    mark[u] = true;
    cnt++;
    for (int i = 0; i < (int) adj[u].size(); i++)
    {
        int v = adj[u][i];
        if (mark[v] == false)
        {
            dfs(v);
        }
    }
}

void XuLy()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        mark[i] = false;
    }
    long long res = 1LL * n * (n - 1) / 2;
    for (int i = 1; i < n; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        if (w == 0)
        {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (mark[i] == false)
        {
            cnt = 0;
            dfs(i);
            res -= 1LL * cnt * (cnt - 1) / 2;
        }
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
