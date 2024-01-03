#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 5 * 1e5 + 7;
int a[MAXN];
int n, s, ans;

bool Check(int x)
{
    int t = 0;
    for(int i = 1; i <= x; ++i)
    {
        t += a[i];
    }
    if(t >= s) return true;
    for(int i = x + 1; i <= n; ++i)
    {
        t = t - a[i - x] + a[i];
        if(t >= s) return true;
    }
    return false;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    int l = 0, r = n;
    while(r - l > 1)
    {
        int m = (l + r) / 2;
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

