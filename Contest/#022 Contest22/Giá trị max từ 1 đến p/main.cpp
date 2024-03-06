#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], MAX[MAXN];
int n, q;

void Nhap()
{
	memset(MAX, -1e18, sizeof MAX);
	cin >> n >> q;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		MAX[i] = max(MAX[i - 1], a[i]);
	}
}

void XuLy()
{
	while (q--) 
	{
		int x;
		cin >> x;
		cout << MAX[x] << '\n';
	}
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
