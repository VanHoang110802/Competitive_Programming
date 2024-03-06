#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];
int n;

void Nhap()
{
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i];
}

void XuLy()
{
	sort(a + 1, a + n + 1); // O(nlogn)
	int ans_1 = a[1] * a[2] * a[n];
	int ans_2 = a[n] * a[n - 1] * a[n - 2];
	if ((a[1] < 0 && a[2] < 0) && (ans_1 > ans_2)) cout << ans_1 << '\n';
	else cout << ans_2 << '\n';
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
