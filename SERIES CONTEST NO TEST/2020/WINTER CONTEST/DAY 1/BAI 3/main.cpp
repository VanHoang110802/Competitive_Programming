#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX_N = 10005;
const int inf = 1000000007;
vector <pair <int, int> > adj[MAX_N];
int n, m, L, sz;
vector <int> source;
int weight[MAX_N];
bool mark[MAX_N];

void prim()
{
    priority_queue <pair <int, int>, vector <pair <int, int> >, greater <pair <int, int> > > pq;
    for (int i = 0; i < (int) source.size(); i++)
    {
        int src = source[i];
        weight[src] = 0;
        pq.push(make_pair(0, src));
    }
    while (!pq.empty())
    {
        pair <int, int> minTop = pq.top();
        pq.pop();
        int u = minTop.second;
        if (weight[u] < minTop.first)
        {
            continue;
        }
        mark[u] = true;
        for (int i = 0; i < (int) adj[u].size(); i++)
        {
            pair <int, int> prNxt = adj[u][i];
            int v = prNxt.first;
            if (mark[v] == true)
            {
                continue;
            }
            int w = prNxt.second;
            if (weight[v] > w)
            {
                weight[v] = w;
                pq.push(make_pair(w, v));
            }
        }
    }
    long long res = 0LL;
    for (int i = 1; i <= n; i++)
    {
        res += 1LL * weight[i];
    }
    res += 1LL * (n - sz) * L;
    cout << res << '\n';
}

void XuLy()
{
    source.clear();
    cin >> n >> m >> L >> sz;
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        weight[i] = inf;
        mark[i] = false;
    }
    for (int i = 1; i <= sz; i++)
    {
        int src;
        cin >> src;
        source.push_back(src);
    }
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    prim();
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
