#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];
int n, sum = 0;

void Nhap()
{
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i];
}

void XuLy()
{
	int Tmax = -1e18;
	for (int i = 1; i <= n; i++)
	{
		sum = max(a[i], sum + a[i]);
		Tmax = max(Tmax, sum);
	}
	cout << Tmax << '\n';
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
