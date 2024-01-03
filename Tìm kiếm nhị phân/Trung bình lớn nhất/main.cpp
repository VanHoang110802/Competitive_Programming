#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
double a[MAXN], s[MAXN];
int n, k;
double ans;

bool Check(double j)
{
    for(int i = 1; i <= n; ++i)
    {
        s[i] = s[i - 1] + a[i] - j;
    }
    double smin = 0;
    for(int i = k; i <= n; ++i)
    {
        if(smin <= s[i]) return true;
        smin = min(smin, s[i - k + 1]);
    }
    return false;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        a[i] *= 100000;
    }
    double l = *min_element(a + 1, a + n +1), r = *max_element(a + 1, a + n +1);
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(Check(m))
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << fixed << setprecision(3) << ans / 100000.0 << '\n';
    return 0;
}
