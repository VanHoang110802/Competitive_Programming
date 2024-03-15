#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.14;
double r;

void Nhap()
{
    cin >> r;
}

void XuLy()
{
    cout << fixed << setprecision(3) << 2.0 * PI *r << ' ' << PI * r * r << '\n';
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
