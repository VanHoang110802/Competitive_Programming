#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int a[MAXN], s[MAXN];
int n, k, ans, x;

bool Check(int i, int j)
{
    int dienTich = a[i] * (i - j) - (s[i - 1] - s[j - 1]);
    return (dienTich <= k);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; ++i) s[i] = s[i - 1] + a[i];
    for(int i = 2; i <= n; ++i)
    {
        int l = 1, r = i - 1;
        while(l <= r)
        {
            int m = (l + r) / 2;
            if(Check(i, m))
            {
                if(ans < i - m + 1)
                {
                    ans = i - m + 1;
                    x = a[i];
                }
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
    }
    cout << ans << ' ' << x << '\n';
    return 0;
}
