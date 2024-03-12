#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
int x, y;

void Nhap()
{
	cin >> x >> y;
}

void XuLy()
{
	cout << (x + y) * (y - x + 1) / 2 << '\n';
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
