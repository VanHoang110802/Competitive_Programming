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

int dem(int x, int y, int z)
{
	return y / z - (x - 1) / z;
}

void XuLy()
{
	cout << dem(a, b, c) + dem(a, b, d) - dem(a, b, c * d / __gcd(c, d));
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
