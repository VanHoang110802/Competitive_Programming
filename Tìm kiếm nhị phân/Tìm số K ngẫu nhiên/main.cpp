#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
const int MAXB = 2 * 1e3 + 7;
int a[MAXN], b[MAXB];
int n, ans;

bool Check(int x)
{
    for(int i = 1; i <= x; ++i) b[a[i] + MAXB]++;
    for(int i = x + 1; i <= n; ++i)
    {
        if(b[a[i] + MAXB] > 0)
        {
            b[a[i] + MAXB]++;
        }
        b[a[i - x] + MAXB]--;
    }
    for(int i = 0; i <= MAXB / 2; ++i)
    {
        if(b[i] > 0) return true;
    }
    return false;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
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
