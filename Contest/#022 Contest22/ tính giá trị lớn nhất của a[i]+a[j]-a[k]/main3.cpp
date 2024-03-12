#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], f[MAXN], d[MAXN];
int n, res = 0;

void Nhap()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
}

void XuLy()
{
    f[0] = -1e18;
    d[0] = -1e18;
    for(int i = 1; i <= n; i++)
    {
        f[i] = max(f[i - 1], a[i]);
        d[i] = max(d[i - 1], a[i] + f[i - 1]);
        res = max(res, d[i - 1] - a[i]);
    }
    cout << res << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
