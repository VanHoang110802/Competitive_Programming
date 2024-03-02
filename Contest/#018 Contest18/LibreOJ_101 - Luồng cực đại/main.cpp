#include <bits/stdc++.h>
#define ll long long
#define N 5005
using namespace std;
const ll inf = 1e14;
int to[2 * N], nxt[2 * N], head[N];
ll flow[2 * N];
int q[N], dis[N], cur[N];
int num = 1, n, m, s, e;
ll maxflow;
void add(int u, int v, int c)
{
    to[++num] = v;
    nxt[num] = head[u];
    head[u] = num;
    flow[num] = c;
}
bool bfs()
{
    for (int i = 1; i <= n; i++)
        cur[i] = head[i], dis[i] = 0;

    int h = 0, t = 0;
    q[++t] = s;
    dis[s] = 1;

    while (h < t)
    {
        int u = q[++h];

        for (int i = head[u]; i; i = nxt[i])
        {
            int v = to[i];

            if (flow[i] && !dis[v])
            {
                dis[v] = dis[u] + 1;
                q[++t] = v;

                if (v == e)
                    return 1;
            }
        }
    }

    return 0;
}
ll dfs(int u, ll sum)
{
    if (!sum || u == e)
        return sum;

    ll cnt = 0;

    for (int i = cur[u]; i; i = nxt[i])
    {
        cur[u] = i;
        int v = to[i];
        ll f;

        if (dis[v] == dis[u] + 1 && (f = dfs(v, min(sum - cnt, flow[i]))))
        {
            flow[i] -= f, flow[i ^ 1] += f;
            cnt += f;

            if (!sum - cnt)
                break;
        }
    }

    return cnt;
}
void Dinic()
{
    while (bfs())
        maxflow += dfs(s, inf);
}
int main()
{
    scanf("%d%d%d%d", &n, &m, &s, &e);

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        ll c;
        scanf("%d%d%lld", &u, &v, &c);
        add(u, v, c);
        add(v, u, 0);
    }

    Dinic();
    printf("%lld", maxflow);
    return 0;
}
