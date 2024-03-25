#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long

template <typename vanhoang>
vanhoang GCD(vanhoang a, vanhoang b)
{
    if (b == 0) return a;
    return GCD(b, a % b);
}

template <typename vanhoang>
vanhoang LCM(vanhoang a, vanhoang b)
{
    return a / GCD(a, b) * b;
}

void XuLy()
{
    int x, n;
    cin >> x >> n;
    cout << GCD(x, n) << '\n' << LCM(x, n);
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
