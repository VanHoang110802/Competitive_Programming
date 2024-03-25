#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

#define int long long

void XuLy()
{
    int a, b;
    cin >> a >> b;
    long long ans = a * b;
    long long cs1 = ans % 10;
    ans /= 10;
    long long cs2 = ans % 10;
    if((cs1 + cs2) % 3 == 0) cout << "YES";
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
