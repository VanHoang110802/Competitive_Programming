#include <bits/stdc++.h>
#define pii pair<int, int>
#define fi first
#define se second
#define mp make_pair
using namespace std;

const int nmax = 50001;
pii dsc[nmax*2];
vector <int> adj[nmax], adj1[nmax];
int dd[nmax], d[nmax], cha[nmax], num[nmax], low[nmax];
int n, m, id, dem=0;

void doc()
{
    cin >> n >> m;
    for (int i=1; i<=m; i++)
    {
        int u,v;
        cin >> u >> v;
        dsc[i] = mp(u,v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void DFS(int u)
{
    dd[u] = 1;
    for (int i=0; i<adj[u].size(); i++)
    {
        int v = adj[u][i];
        if (dd[v] == 0)
        {
            d[v] = d[u] + 1;
            cha[v] = u;
            DFS(v);
        }
    }
}

void dinh_chieu()
{
    for (int i=1; i<=m; i++)
    {
        int u = dsc[i].fi;
        int v = dsc[i].se;
        if (cha[v] == u) adj1[u].push_back(v);
        else if (cha[u] == v) adj1[v].push_back(u);
             else if (d[u] < d[v]) adj1[v].push_back(u);
                  else adj1[u].push_back(v);
    }
}

void DFS1(int u)
{
    dd[u] = 1;
    id++;
    num[u] = id;
    low[u] = id;
    for (int i=0; i<adj1[u].size();i++)
    {
        int v=adj1[u][i];
        if (dd[v] == 0)
        {
            DFS1(v);
            low[u] = min(low[u],low[v]);
        }
        else if (dd[v] == 1) low[u] = min(num[v],low[u]);
    }
    if (low[u] == num[u]) dem++;
}
void tajan()
{
    memset(dd,0,sizeof(dd));
    for (int i=1; i<=n; i++)
    if (dd[i] == 0) DFS1(i);
}

void ghi()
{
    if (dem != 1) cout << 0;
    else
    {
        cout << 1 << endl;
        for (int u=1; u<=n; u++)
        for (int i=0; i<adj1[u].size(); i++)
        {
            int v = adj1[u][i];
            cout << u << " " << v << endl;
        }
    }
}

int main()
{
    //freopen("oneway.inp","r",stdin);
    //freopen("oneway.out","w",stdout);
    doc();
    DFS(1);
    dinh_chieu();
    tajan();
    ghi();
    return 0;
}
