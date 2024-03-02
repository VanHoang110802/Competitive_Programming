#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> g[50010];
int n, m, w[50010], sz[50010], v[50010], pool[61000010], o[50010], t;

void dfs(int x)
{
    for (auto u : g[x])
        dfs(u), sz[x] += sz[u];

    o[++t] = x, ++sz[x];
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n >> m;

    for (int i = 1, x; i <= n; i++)
        cin >> x, g[x].push_back(i);

    for (int i = 1; i <= n; i++)
        cin >> w[i];

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int (&f)[n + 1][m + 1] = decltype(f)(pool);
    dfs(0);

    for (int i = 1; i <= n; i++)
    {
        int x = o[i];

        for (int j = 0; j < w[x]; j++)
            f[i][j] = f[i - sz[x]][j];

        for (int j = w[x]; j <= m; j++)
            f[i][j] = max(f[i - sz[x]][j], f[i - 1][j - w[x]] + v[x]);
    }

    cout << *max_element(f[n], f[n] + m + 1);
    return 0;
}
