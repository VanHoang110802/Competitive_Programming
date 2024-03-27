#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

const int MAX_N = 100005;
struct segment
{
    int l, r;
    bool operator < (const segment &hs) const
    {
        return (l < hs.l || (l == hs.l && r < hs.r));
    }
};
priority_queue <int, vector <int>, greater <int> > pq;
segment a[MAX_N];

void XuLy()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].l >> a[i].r;
    }
    while (pq.empty() == false)
    {
        pq.pop();
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= k; i++)
    {
        pq.push(a[i].r);
    }
    int res = max(0, pq.top() - a[k].l + 1);
    for (int i = k + 1; i <= n; i++)
    {
        pq.pop();
        pq.push(a[i].r);
        res = max(res, max(0, pq.top() - a[i].l + 1));
    }
    cout << res << '\n';
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
