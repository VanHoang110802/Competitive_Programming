#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

struct police
{
  int column;
  int speed;
};
police a[10005];
int n;

bool check(vector <pair<int, int>> &a)
{
    sort(a.begin(), a.end());
    priority_queue <int, vector<int>, greater<int>> pq;
    int p = 0;
    for(int column = 1; column <= n; column++)
    {
        while (!pq.empty())
        {
            if (pq.top() < column)
            {
                pq.pop();
            }
            else
            {
                break;
            }
        }
        while (p < n && a[p].first <= column)
        {
            pq.push(a[p].second);
            p++;
        }
        if (pq.empty() == true)
        {
            return false;
        }
        else
        {
            pq.pop();
        }
    }
    return true;
}

signed main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].column >> a[i].speed;
    }
    int lo = 0;
    int hi = 100000007;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        vector <pair <int, int>> segment;
        for (int i = 1; i <= n; i++)
        {
            segment.push_back(make_pair(max(1, a[i].column - mid / a[i].speed), min(n, a[i].column + mid / a[i].speed)));
        }
        if (check(segment) == true)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}
