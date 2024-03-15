#include <iostream>
using namespace std;

int a, b, c, x, y, z;

void Nhap()
{
    cin >> a >> b >> c >> x >> y >> z;
}

int CheckNhieuTuoi()
{
    if(z > c) return 1;
    else if(z == c)
    {
        if(y > b)
        {
            return 1;
        }
        else if(y == b)
        {
            if(x > a)
            {
                return 1;
            }
        }
    }
    return 2;
}

void XuLy()
{
    cout << CheckNhieuTuoi() << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
