#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long
int n;

void Nhap()
{
    cin >> n;
}

void XuLy()
{
    int x = ceil(sqrt(1));
    int y = floor(sqrt(n));
    cout << y - x + 1;
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
