#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pii pair<int,int>

const int nmax = 5000;
int n,m,dd[nmax],num[nmax],low[nmax],id = 0,maxx = 0,cha[nmax],dem = 0;
vector <int> adj[nmax],adj1[nmax];
set <pii> se;

struct canh
{
    int u,v;
};
stack <canh> s;

void doc()
{
    cin >> n >> m;
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}


void DFS(int u)
{
    id++;
    num[u] = low[u] = id;
    dd[u] = 1;
    for(int i=0; i<adj[u].size(); i++)
    {
        int v = adj[u][i];
        if(dd[v] == 0)
        {
            canh e;
            e.u = u;
            e.v = v;
            s.push(e);
            cha[v] = u;
            DFS(v);
            low[u] = min(low[u],low[v]);
            if(low[v] >= num[u])
            {
                int d = 1;
                do
                {
                    e = s.top();
                    s.pop();
                    d++;
                }
                while(e.u != u || e.v != v);
                if (d>2)
                    maxx = max(maxx,d);
            }
        }
        else low[u] = min(low[u],num[v]);
    }
}

int main()
{
    doc();
    for(int i=1; i<=n; i++)if(dd[i] == 0)DFS(i);
    cout << maxx;
    return 0;
}
