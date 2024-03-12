#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
int a, b, c;

void Nhap()
{
	cin >> a >> b >> c;
}

int POW(int x, int y, int z)
{
	if (y == 0) return 1;
	if (x == 0) return 0;
	int temp = POW(x, y / 2, c);
	if (y % 2 == 0)	return (temp % z) * (temp % z) % z;
	else return (temp % z) * (temp % z) % z * (x % z) % z;
}

void XuLy()
{
	cout << POW(a, b, c);
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
