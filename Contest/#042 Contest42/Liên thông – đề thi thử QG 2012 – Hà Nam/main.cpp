
#include <bits/stdc++.h>
using namespace std;

int n, m, dem, sotp;
vector<int> ke[20020];
int fa[20020], low[20020], num[20020], sc[20020], add[20020];

void dfs(int i)
{
    ++dem;
    num[i] = dem;
    low[i] = num[i];
    for(int k=0; k<ke[i].size(); ++k)
    {
        int j = ke[i][k];
        if(fa[j] == -1)
        {
            ++sc[i];
            fa[j] = i;
            dfs(j);
            low[i] = min(low[i], low[j]);
        }
        else if(j != fa[i])
            low[i] = min(low[i], num[j]);
    }
}
int main()
{
    scanf("%d%d", &n, &m);
    for(int i=0; i<m; ++i)
    {
        int u, v;
        scanf("%d%d", &u, &v);
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    memset(fa, -1, sizeof(fa));
    for(int i=1; i<=n; ++i)
        if(fa[i]==-1)
        {
            ++sotp;
            fa[i] = 0;
            dfs(i);
        }

    for(int i=1; i<=n; ++i)
        if(fa[i] != 0)
        {
            int fi = fa[i];
            if(low[i] >= num[fi]) ++add[fi];
        }

    for(int i=1; i<=n; ++i)
    {
        if(fa[i] == 0)
            printf("%d\n", sotp + sc[i] - 1);
        else
            printf("%d\n", sotp + add[i]);
    }
    return 0;
}
