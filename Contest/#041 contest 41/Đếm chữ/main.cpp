#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

char a, b;

void Nhap()
{
    cin >> a >> b;
}

void XuLy()
{
    int temp_1 = (int)a;
    if(temp_1 >= 65 && temp_1 <= 90) temp_1 += 32;

    int temp_2 = (int)b;
    if(temp_2 >= 65 && temp_2 <= 90) temp_2 += 32;

    cout << temp_2 - temp_1 - 1 << '\n';
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
