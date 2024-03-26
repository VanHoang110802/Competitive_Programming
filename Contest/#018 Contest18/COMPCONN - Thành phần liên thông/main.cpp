#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

const int MAXN = 1e4 + 7;
vector<int> num[MAXN];
set<int> ans[MAXN];
bool check[MAXN];
int n, m, cnt = 0;

void dfs(int u)
{
    check[u] = true;
    ans[cnt].insert(u);
    for(auto v : num[u])
    {
        if(!check[v])
        {
            dfs(v);
        }
    }
}

void XuLy()
{
    cin >> n >> m;
    for(int i = 1; i <= m; ++i)
    {
        int u, v; cin >> u >> v;
        num[u].push_back(v);
        num[v].push_back(u);
    }

    for(int i = 1; i <= n; ++i)
    {
        if(!check[i])
        {
            ++cnt;
            dfs(i);
        }
    }

    cout << cnt << '\n';
    for(int i = 1; i <= cnt; ++i)
    {
        cout << ans[i].size() << ' ';
        for(auto x : ans[i])
        {
            cout << x << ' ';
        }
        cout << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    XuLy();
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
