#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double a, b;
char x;

void Nhap()
{
    cin >> a >> x >> b;
}

void XuLy()
{
    if(x == '+') cout << fixed << setprecision(3) << a + b << '\n';
    else if(x == '-') cout << fixed << setprecision(3) << a - b << '\n';
    else if(x == '*') cout << fixed << setprecision(3) << a * b << '\n';
    else if(x == '/')
    {
        if(b == 0) cout << "ze";
        else cout << fixed << setprecision(3) << a / b << '\n';
    }
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
