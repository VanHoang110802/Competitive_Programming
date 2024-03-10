#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];
int n, k, sum = 0, idx = 0;

void Nhap()
{
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

void XuLy()
{
    for(int i = 1; i <= k; i++) sum += a[i];
    int ans = sum;
    for(int i = k + 1; i <= n; i++)
    {
        ans += a[i] - a[i - k];
        if(ans >= sum)
        {
            sum = ans;
            idx = i;
        }
    }
    cout << sum << '\n';
    for(int i = 1; i <= k; ++i) cout << a[i + k - 1] << ' ';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
