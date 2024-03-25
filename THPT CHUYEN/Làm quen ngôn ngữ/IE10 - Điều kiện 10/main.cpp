#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long

void XuLy()
{
    int ngay1, thang1, nam1, ngay2, thang2, nam2;
    cin >> ngay1 >> thang1 >> nam1 >> ngay2 >> thang2 >> nam2;
    if(nam1 < nam2) cout << 1;
    else if(nam1 > nam2) cout << -1;
    else
    {
        if(thang1 < thang2) cout << 1;
        else if (thang1 > thang2) cout << -1;
        else
        {
            if(ngay1 < ngay2) cout << 1;
            else if(ngay1 > ngay2) cout << -1;
            else cout << 0;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    XuLy();
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
