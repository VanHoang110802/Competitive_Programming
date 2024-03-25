#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long

void XuLy()
{
    int x, y;
    cin >> x >> y;
    if(y == 0) cout << "ERROR";
    else
    {
        int u = x / (__gcd(x, y)), v = y / (__gcd(x, y));
        if (u > 0 && v < 0)
        {
            u = -u;
            v = -v;
        }
        cout << u << ' ' << v;
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
