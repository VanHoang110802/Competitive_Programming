
#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];
int n, q;

void Nhap()
{
	cin >> n >> q;
	for (int i = 1; i <= n; ++i) cin >> a[i];
}

void XuLy()
{
	while (q--) // O(q)
	{
		int x, MAX = -1e18; cin >> x;
		for (int i = 1; i <= x; ++i) // O(x)
		{
			if (a[i] > MAX) MAX = a[i];
		}
		cout << MAX << '\n';
	}
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
