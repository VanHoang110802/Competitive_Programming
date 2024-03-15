#include <iostream>
using namespace std;

int a, b;

void Nhap()
{
    cin >> a >> b;
}

void XuLy()
{
    if(a == 0)
    {
        if(b == 0) cout << "INFINITE SOLUTIONS";
        else cout << "NO SOLUTION";
    }
    else
    {
        double temp = (double)-b/a;
        if(temp == (int)temp) cout << temp;
        else cout << "NO SOLUTION";
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
