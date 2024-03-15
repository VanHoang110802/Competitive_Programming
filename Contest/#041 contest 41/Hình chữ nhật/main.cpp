#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c;

void Nhap()
{
    cin >> a >> b >> c;
}

void XuLy()
{
    if(a == c) cout << b;
    else if(a == b) cout << c;
    else if(b == c) cout << a;
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
