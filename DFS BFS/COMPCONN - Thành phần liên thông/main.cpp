#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

const int MAXN = 1e3 + 7;
vector<int> adj[MAXN];
set<int> ans[MAXN];
bool Check[MAXN];
int n, m, temp;

void Nhap()
{
    cin >> n >> m;
    for(int i = 1; i <= m; ++i)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void dfs(int u)
{
    Check[u] = true;
    ans[temp].insert(u);
    for(auto v : adj[u])
    {
        if(!Check[v]) dfs(v);
    }
}

void sol()
{
    for(int i = 1; i <= n; ++i)
    {
        if(!Check[i])
        {
            temp++;
            dfs(i);
        }
    }
    cout << temp << '\n';
    for(int i = 1; i <= temp; ++i)
    {
        cout << ans[i].size() << ' ';
        for(auto x : ans[i]) cout << x << ' ';
        cout << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Nhap();
    sol();
    return 0;
}
