#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

#define int long long

void XuLy()
{
    int a, b;
    cin >> a >> b;
    cout << a / b << '\n' << a % b << '\n';
    cout << fixed << setprecision(2) << (double)a / b;
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
