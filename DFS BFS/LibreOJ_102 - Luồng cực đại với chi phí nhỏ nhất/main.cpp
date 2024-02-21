#include <bits/stdc++.h>
#define N 405
#define M 20005
#define INF 1234567891011
#define ll long long
using namespace std;
int n, m, S, T, head[N], cur[N], cnt;
ll dis[N], ans1, ans2;
bool bz[N];
struct node {
    int to, nxt;
    ll w, c;
} e[M << 1];
void add(int u, int v, ll w, ll c) {
    e[++cnt] = (node) {
        v, head[u], w, c
    };
    head[u] = cnt;
}
void adde(int u, int v, ll w, ll c) {
    add(u, v, w, c);
    add(v, u, 0, -c);
}
bool bfs() {
    for (int i = 1; i <= n; ++i)
        dis[i] = INF;

    queue<int> q;
    q.push(S);
    dis[S] = 0;
    bz[S] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        bz[u] = 0;

        for (int i = head[u]; ~i; i = e[i].nxt) {
            int v = e[i].to;

            if (e[i].w && dis[v] > dis[u] + e[i].c) {
                dis[v] = dis[u] + e[i].c;

                if (!bz[v])
                    bz[v] = 1, q.push(v);
            }
        }
    }

    return dis[T] != INF;
}
ll dfs(int u, ll maxflow) {
    if (u == T)
        return maxflow;

    ll flow = 0;
    bz[u] = 1;

    for (int i = cur[u]; ~i; i = e[i].nxt) {
        cur[u] = i;
        int v = e[i].to;

        if (!bz[v] && dis[v] == dis[u] + e[i].c && e[i].w) {
            ll delta = dfs(v, min(maxflow - flow, e[i].w));
            e[i].w -= delta;
            e[i ^ 1].w += delta;
            ans2 += delta * e[i].c;
            flow += delta;

            if (flow == maxflow)
                break;
        }
    }

    bz[u] = 0;
    return flow;
}
void dinic() {
    while (bfs()) {
        for (int i = 1; i <= n; ++i)
            cur[i] = head[i];

        ans1 += dfs(S, INF);
    }
}
int main() {
    scanf("%d%d", &n, &m);
    S = 1;
    T = n;
    memset(head, -1, sizeof(head));
    cnt = -1;

    for (int i = 1; i <= m; ++i) {
        int u, v;
        ll w, c;
        scanf("%d%d%lld%lld", &u, &v, &w, &c);
        adde(u, v, w, c);
    }

    dinic();
    printf("%lld %lld\n", ans1, ans2);
}
