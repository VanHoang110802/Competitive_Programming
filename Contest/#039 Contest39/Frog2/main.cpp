#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], dp[MAXN];
int n, k;

void Nhap()
{
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 0; i < MAXN; ++i) dp[i] = 1e18;
}

void XuLy()
{
    dp[1] = 0;
    for(int i = 2; i <= n; ++i)
    {
        for(int j = 1; j <= k; ++j)
        {
            if(i - j >= 1)
            {
                dp[i] = min(dp[i], dp[i - j] + abs(a[i] - a[i - j]));
            }
        }

    }
    cout << dp[n] << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
