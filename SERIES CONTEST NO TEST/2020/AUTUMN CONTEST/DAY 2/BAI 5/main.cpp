#include <iostream>
#include <iomanip>
#include <queue>
using namespace std;

const int MAX_V = 100005;
int key[102];
int dist[MAX_V];

void XuLy()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> key[i];
    }
    for (int i = 0; i < MAX_V; i++)
    {
        dist[i] = -1;
    }
    dist[1] = 0;
    queue <int> myqueue;
    myqueue.push(1);
    while (!myqueue.empty())
    {
        int u = myqueue.front();
        myqueue.pop();
        for (int i = 1; i <= n; i++)
        {
            int v = u * key[i];
            if (v > 100000 || dist[v] != -1)
            {
                continue;
            }
            dist[v] = dist[u] + 1;
            myqueue.push(v);
        }
    }
    if (dist[k] == -1)
    {
        cout << "Impossible";
    }
    else
    {
        cout << dist[k];
    }
    cout << '\n';
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
