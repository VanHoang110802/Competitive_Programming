#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int a[MAXN], s[MAXN];
int n, q, p;

bool Check(int m, int k)
{
    return (m + s[p - 1] - s[m] >= (p - m - 1) * k);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> q;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; ++i)
    {
        s[i] = s[i - 1] + a[i];
    }
    while(q--)
    {
        int k; cin >> k;

        int l = 0, r = n + 1;
        while(r - l > 1)
        {
            int m = (l + r) / 2;
            if(a[m] >= k) r = m;
            else l = m;
        }
        p = r;
        if(p == 1)
        {
            cout << n << '\n';
            continue;
        }
        l = 0, r = p;
        while(r - l > 1)
        {
            int m = (l + r) / 2;
            if(Check(m, k)) r = m;
            else l = m;
        }
        cout << n - r << '\n';
    }
    return 0;
}
