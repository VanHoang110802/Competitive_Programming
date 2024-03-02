#include<bits/stdc++.h>
using namespace std;

#define maxn 200005
int n, d[maxn];
vector <int> a[maxn];

void dfs(int u, int p=-1)
{
    for (int v:a[u]) if (p!=v)
    {
        d[v] = d[u] + 1;
        dfs(v, u);
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i=1; i<n; i++)
    {
        int u, v; cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1);
    int root = max_element(d+1, d+n+1) - d;
    memset(d, 0, sizeof d);
    dfs(root);
    cout << *max_element(d+1, d+n+1);
}
