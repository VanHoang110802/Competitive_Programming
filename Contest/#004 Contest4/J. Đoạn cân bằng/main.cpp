#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+5;
const int MAXD = 2e6+5;
int n, m, t = 100000;
int a[MAXN], dem[MAXD], s[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    s[0] = 0;
    dem[0 + t] = 1;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        {
            s[i] = s[i - 1] + 1;
        }
        else
        {
            s[i] = s[i - 1] - 1;
        }
        dem[s[i] + t]++;
    }
    int ans = 0;
    for(int i = 0; i <= n; ++i)
    {
        ans = ans + dem[s[i] + t] - 1;
    }
    cout << ans / 2;
    return 0;
}
