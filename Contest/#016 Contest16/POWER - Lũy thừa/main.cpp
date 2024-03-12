#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
int a = 2, b;
const int c = 1e9 + 7;

void Nhap()
{
	cin >> b;
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
