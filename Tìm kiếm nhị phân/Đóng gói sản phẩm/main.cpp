#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 5 * 1e5 + 7;
int a[MAXN];
int n, k, ans;

bool Check(int x)
{
    int d = 1, t = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(t + a[i] > x)
        {
            d++;
            t = a[i];
        }
        else
        {
            t += a[i];
        }
    }
    return (d <= k);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    int l = 0, r = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        l = max(l, a[i]);
        r += a[i];
    }
    while(r - l > 1)
    {
        int m = (r + l) / 2;
        if(Check(m))
        {
            ans = m;
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << ans << '\n';
    return 0;
}
