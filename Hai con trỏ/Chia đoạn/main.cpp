#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e5;
int n, s = 0, ans = 0;
int a[MAXN], c[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        s += a[i];
    }
    if(s % 3 != 0)
    {
        cout << 0;
    }
    else
    {
        s /= 3;
        int t = 0;
        for(int i = n; i > 0; --i)
        {
            t += a[i];
            if(t == s)
            {
                c[i] = c[i + 1] + 1;
            }
            else
            {
                c[i] = c[i + 1];
            }
        }
        t = 0;
        for(int i = 1; i < n - 1; ++i)
        {
            t += a[i];
            if(t == s) ans += c[i + 2];
        }
        cout << ans << '\n';
    }
    return 0;
}
