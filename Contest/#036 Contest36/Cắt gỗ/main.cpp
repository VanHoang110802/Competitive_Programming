#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];
int n, k, ans;

bool Check(int x)
{
    int s = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(a[i] > x)
        {
            s += (a[i] - x);
        }
    }
    return (k <= s);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    int l = 0, r = *max_element(a + 1, a + n + 1);
    while(r - l > 1)
    {
        int m = (l + r) / 2;
        if(Check(m))
        {
            ans = m;
            l = m;
        }
        else
        {
            r = m;
        }
    }
    cout << ans << '\n';
    return 0;
}
