#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define int long long
int a, b, c, d;

void Nhap()
{
    cin >> a >> b >> c >> d;
}

double KhoangCach()
{
	double kc;
	kc = sqrt(double(c - a) * (c - a) + (d - b) * (d - b));
	return kc;
}

void XuLy()
{
    cout << fixed << setprecision(2) << KhoangCach();
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
