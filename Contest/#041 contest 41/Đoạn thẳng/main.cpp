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

void XuLy()
{
    if(max(a, c) <= min(b, d)) cout << "YES";
    else cout << "NO";
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
