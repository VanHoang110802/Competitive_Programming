#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], dp[MAXN];
int n;

void Nhap()
{
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i];
}

void XuLy()
{
    dp[1] = 0;
    dp[2] = abs(a[1] - a[2]);
    for(int i = 3; i <= n; ++i)
    {
        dp[i] = min(dp[i - 1] + abs(a[i - 1] - a[i]), dp[i - 2] + abs(a[i] - a[i - 2]));
    }
    cout << dp[n] << '\n';
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
