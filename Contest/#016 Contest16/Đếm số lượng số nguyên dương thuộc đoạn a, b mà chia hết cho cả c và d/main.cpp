#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
int a, b, c, d;

void Nhap()
{
	cin >> a >> b >> c >> d;
}

int LCM(int x, int y)
{
	return (x * y) / __gcd(x, y);
}

void XuLy()
{
	int BC = LCM(c, d);
	cout << (b / BC) - ((a - 1) / BC) << '\n';
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
