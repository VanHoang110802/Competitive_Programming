#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long n, res = 0;
    cin >> n;
    vector<long long> a(n + 1), f(n + 1), d(n + 1,0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    f[0] = d[0] = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        f[i] = max(f[i - 1], a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        d[i] = max(d[i - 1], a[i] + f[i - 1]);
    }
    for (int i = 1; i <= n; i++)
    {
        res = max(res, d[i - 1] - a[i]);
    }
    cout << res;
    return 0;
}
