#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX_N = 100005;
int parent[MAX_N];
long long up[MAX_N], down[MAX_N];
int a[MAX_N];
vector <int> adj[MAX_N];
int sz[MAX_N];

void dfs1(int u, int parent)
{
    sz[u] = 1;
    for (int i = 0; i < (int) adj[u].size(); i++)
    {
        int v = adj[u][i];
        if (v == parent)
        {
            continue;
        }
        dfs1(v, u);
        sz[u] += sz[v];
    }
}

void dfs2(int u, int parent)
{
    down[u] = 1LL * sz[u] * a[u];
    for (int i = 0; i < (int) adj[u].size(); i++)
    {
        int v = adj[u][i];
        if (v == parent)
        {
            continue;
        }
        dfs2(v, u);
        down[u] += down[v];
    }
}

void dfs3(int u, int parent, int n)
{
    if (parent != 0)
    {
        long long val = down[parent];
        val -= 1LL * sz[u] * a[parent];
        val -= down[u];
        val += up[parent];
        val += 1LL * (n - sz[u]) * a[u];
        up[u] = val;
    }
    for (int i = 0; i < (int) adj[u].size(); i++)
    {
        int v = adj[u][i];
        if (v == parent)
        {
            continue;
        }
        dfs3(v, u, n);
    }
}

void XuLy()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        adj[i].clear();
        up[i] = 0;
        down[i] = 0;
        sz[i] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs1(1, 0);
    dfs2(1, 0);
    dfs3(1, 0, n);
    for (int i = 1; i <= n; i++)
    {
        cout << up[i] + down[i] - a[i] << ' ';
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
