#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 3 * 1e5 + 7;
int a[MAXN];
int n, ans;

bool Check(int x)
{
    for(int i = 1; i < x; ++i)
    {
        if(a[i] + i > a[x] + n) return false;
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    int l = 1, r = n;
    while(l <= r)
    {
        int m = (r + l) / 2;
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
    cout << ans << '\n';
    return 0;
}
