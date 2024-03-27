#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_N = 53;
const int inf = 100005;
int dp[MAX_N][MAX_N];
pair <int, int> a[MAX_N];
int res[MAX_N];
int trace[MAX_N][MAX_N];

void XuLy()
{
    int n, g, k;
    cin >> n >> g >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a + 1, a + n + 1);
    for (int i = 0; i <= n; i++)
    {
        for (int group = 0; group <= g; group++)
        {
            dp[i][group] = inf;
            trace[i][group] = -1;
        }
    }
    dp[0][0] = 0;
    for (int group = 0; group < g; group++)
    {
        for (int i = 0; i < n; i++)
        {
            if (dp[i][group] == inf)
            {
                continue;
            }
            if (dp[i + 1][group + 1] > dp[i][group])
            {
                dp[i + 1][group + 1] = dp[i][group];
                trace[i + 1][group + 1] = i;
            }
            if (i + 2 <= n)
            {
                for (int j = i + 2; j <= n; j++)
                {
                    if (dp[j][group + 1] > dp[i][group] + a[j].first - a[i + 1].first)
                    {
                        dp[j][group + 1] = dp[i][group] + a[j].first - a[i + 1].first;
                        trace[j][group + 1] = i;
                    }
                }
            }
        }
    }
    if (dp[n][g] > k)
    {
        cout << "IMPOSSIBLE" << '\n';
    }
    else
    {
        int i = n;
        int group = g;
        while (group > 0)
        {
            int before = trace[i][group];
            for (int x = before + 1; x <= i; x++)
            {
                res[a[x].second] = group;
            }
            group--;
            i = before;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << res[i] << ' ';
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
    int test;
    cin >> test;
    while(test--)
    {
        XuLy();
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
