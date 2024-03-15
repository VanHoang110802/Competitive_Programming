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

bool checkRectangle(int a_1, int b_1, int c_1, int d_1)
{
    return (a_1 == c_1 || b_1 == d_1);
}

void XuLy()
{
    cout << ((checkRectangle(a, b, c, d) || checkRectangle(a, b, d, c)) ? "YES" : "NO");
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
