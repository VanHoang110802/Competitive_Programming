#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

#define int long long

void XuLy()
{
    int ax, ay, bx, by, cx, cy;
    int ab[2], ac[2];
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    ab[1] = bx - ax;
    ab[2] = by - ay;
    ac[1] = cx - ax;
    ac[2] = cy - ay;
    if(((ab[1] * ac[2]) - (ab[2] * ac[1]) == 0)) cout << "YES";
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
