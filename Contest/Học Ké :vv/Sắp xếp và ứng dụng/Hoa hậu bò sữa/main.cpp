#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
#define fi first
#define se second
const int MAXN = 1e6 + 7;
int a[MAXN], b[MAXN], c[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
        a[i] = a[i - 1];
        b[i] = b[i - 1];
        c[i] = c[i - 1];
        int x; cin >> x;
        if(x == 1) a[i]++;
        else if(x == 2) b[i]++;
        else c[i]++;
    }
    for(int i = 1; i <= m; ++i)
    {
        int l, r; cin >> l >> r;
        cout << a[r] - a[l - 1] << ' ' << b[r] - b[l - 1] << ' ' << c[r] - c[l - 1] << '\n';
    }
    return 0;
}
