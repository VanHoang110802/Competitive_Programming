#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
#define fi first
#define se second
const int MAXN = 1e6 + 7;
int a[MAXN], f[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    f[1] = 1;
    f[2] = 2;
    for(int i = 3; i <= n; ++i)
    {
        if(a[i] == a[i - 1] && a[i] == a[i - 2])
        {
            f[i] = 2;
            continue;
        }
        f[i] = f[i - 1] + 1;
    }
    sort(f + 1, f + n + 1);
    cout << f[n] << '\n';
    return 0;
}
