#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long

bool KiemTraNguyenTo(long long n)
{
    if(n < 2) return false;
    else
    {
        if(n != 2 && n % 2 == 0) return false;

        for(int i = 3; i * i <= n; i += 2)
        {
            if(n % i == 0) return false;
        }
    }
    return true;
}

void XuLy()
{
    int n;
    cin >> n;
    if(KiemTraNguyenTo(n)) cout << "YES";
    else cout << "NO";
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
