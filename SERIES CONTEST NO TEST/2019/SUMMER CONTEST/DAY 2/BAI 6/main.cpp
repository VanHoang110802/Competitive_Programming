#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

const int MAX_N = 2005;
struct element
{
    int l, r;
};
element a[MAX_N];
vector <int> adj[MAX_N];
bool mark[MAX_N];

void dfs(int u, int key)
{
    mark[u] = true;
    for (int i = 0; i < (int) adj[u].size(); i++)
    {
        int v = adj[u][i];
        if (mark[v] == false && a[v].l <= key && key <= a[v].r)
        {
            dfs(v, key);
        }
    }
}

void XuLy()
{
    int n, m, s, e, k;
    cin >> n >> m >> s >> e >> k;
    vector <int> save;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].l >> a[i].r;
        save.push_back(a[i].l - 1);
        save.push_back(a[i].r);
    }
    save.push_back(0);
    save.push_back(k);
    sort(save.begin(), save.end());
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
    }
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int res = 0;
    for (int j = 1; j < (int) save.size(); j++)
    {
        memset(mark, false, sizeof(mark));
        dfs(s, save[j]);
        if (mark[e] == true)
        {
            res += save[j] - save[j - 1];
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
