#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;

int n, m, x, y;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    vector<vector<int> > a(n + 1);
    vector<int> visited(n + 1, 0);
    vector<set<int> > s(n + 1);
    for(int i = 0; i < m; ++i)
    {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    queue<int> b;
    for(int i = 1; i <= n; ++i)
    {
        if(visited[i] == 0 && !a[i].empty())
        {
            visited[i] = 1;
            s[i].insert(i);
            for(int j : a[i]) b.push(j);
            while(!b.empty())
            {
                x = b.front();
                b.pop();
                if(visited[x] == 0)
                {
                    visited[x] = 2;
                    s[i].insert(x);
                    for(int j : a[x]) b.push(j);
                }
            }
        }
    }
    int res0 = 0, res1 = 0;
    for(int i = 1; i <= n; ++i) res1 += visited[i] == 1, res0 += visited[i] == 0;
    cout << res1 + (res0 > 0) << '\n';
    for(int i = 1; i <= n; ++i)
    {
        if(visited[i] == 0) s[0].insert(i);
        else if(visited[i] == 1)
        {
            cout << s[i].size() << '\n';
            for(int j : s[i]) cout << j << ' ';
            cout << '\n';
        }
    }
    if(res0 > 0)
    {
        cout << res0 << '\n';
        for(int i : s[0])cout << i << ' ';
    }
    return 0;
}
