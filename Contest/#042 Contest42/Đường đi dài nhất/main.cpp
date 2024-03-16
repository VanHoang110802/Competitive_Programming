#include <bits/stdc++.h>
#define maxn 300005
#define tr(i,c) for(typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define oo 2000000000
#define modulo 1000000007

using namespace std;
typedef pair<int,int> II;

int n, m, xp, kt;
vector<II> g[maxn];
int x[maxn], slx, cl[maxn];
int kc[maxn], f[maxn];

void dfs(int u)
{
    cl[u]=1;
    tr(i,g[u])
    {
        int v=(*i).first;
        if (cl[v]==0) dfs(v);
    }
    x[--slx]=u;
}


int main()
{
    //freopen("dag.inp","r",stdin);
    //freopen("dag.out","w",stdout);
    // Doc du lieu
    scanf("%d%d",&n,&m);
    scanf("%d%d",&xp,&kt);
    for(int i=1; i<=m; i++)
    {
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        g[u].push_back(II(v,w));
    }
    // Sap xep topo tren do thi
    memset(cl,0,sizeof(cl));
    slx=n+1;
    for(int i=1; i<=n; i++)
        if (cl[i]==0) dfs(i);
    // Tim duong di dai nhat tu xp den ket thuc
    for(int i=1; i<=n; i++) kc[i]=-oo;
    for(int i=1; i<=n; i++)
    {
        int u=x[i];
        if (u==xp) kc[u]=0;
        if (f[u]!=-oo)
            tr(i,g[u])
        {
            int v=(*i).first, L=(*i).second;
            kc[v]=max(kc[v],kc[u]+L);
        }
    }
    if (kc[kt]==-oo) printf("NO PATH\n");
    else printf("%d\n",kc[kt]);
    // Dem so luong duong di tu s den t
    for(int i=1; i<=n; i++) f[i]=0;
    for(int i=1; i<=n; i++)
    {
        int u=x[i];
        if (u==xp) f[u]=1;
        tr(i,g[u])
        {
            int v=(*i).first;
            f[v]=(f[v]+f[u]) % modulo;
        }
    }
    printf("%d\n",f[kt]);
}
