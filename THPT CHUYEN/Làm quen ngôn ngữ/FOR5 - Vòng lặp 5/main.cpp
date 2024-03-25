#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long
const int MOD = 1e9+7;

void XuLy()
{
    int n;
    cin >> n;
    int tich = 1;
    for(int i = 1; i <= n; ++i)
    {
        tich = (tich * i) % MOD;
    }
    cout << tich;
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
