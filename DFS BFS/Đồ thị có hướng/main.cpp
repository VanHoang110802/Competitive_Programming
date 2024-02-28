#include <bits/stdc++.h>
using namespace std;

int n, m;
vector <int> adj[1001];
bool Check[1001];

void inp()
{
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }
}

void dfs(int u)
{
    Check[u] = true;
    cout << u << ' ';
    for(auto v : adj[u])
    {
        if(!Check[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    inp();
    dfs(1);
    return 0;
}
