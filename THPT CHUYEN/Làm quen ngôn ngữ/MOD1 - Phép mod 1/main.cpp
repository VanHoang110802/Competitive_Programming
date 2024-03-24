#include <iostream>
#include <iomanip>
using namespace std;

#define int long long

void XuLy()
{
    int a, b, c; cin >> a >> b >> c;
    cout << ((a % c) + (b % c)) % c << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    XuLy();
    //cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
