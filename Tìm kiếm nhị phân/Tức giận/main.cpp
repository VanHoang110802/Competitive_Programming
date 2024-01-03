#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int a[MAXN];
int n, k, ans;

bool Check(int x)
{
    int p = 1, d = 1;
    for(int i = 1; i <= n; ++i)
    {
        if(a[p] + (2 * x) < a[i])
        {
            d++;
            p = i;
        }
    }
    return (d <= k);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    int l = 0, r = a[n] - a[1];
    while(l <= r)
    {
        int m = (r + l) / 2;
        if(Check(m))
        {
            ans = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}
