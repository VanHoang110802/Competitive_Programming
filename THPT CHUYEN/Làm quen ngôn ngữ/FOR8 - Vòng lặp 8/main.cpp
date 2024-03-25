#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long
const int MOD = 1e9+7;

template <typename vanhoang>
vanhoang POW(vanhoang a, vanhoang n)
{
    vanhoang ans = 1;
    vanhoang temp = a;
    while(n)
    {
        if(n % 2) (ans *= temp) %= MOD;
        temp = temp * temp % MOD;
        n /= 2;
    }
    return ans;
}

void XuLy()
{
    int n, a, b, c;
    cin >> n;
    if(n < 3)
    {
        cout << 1;
        return;
    }
    a = 1; b = 1;
    for(int i = 3; i <= n; ++i)
    {
        c = (3 * b - a) % MOD;
        a = b;
        b = c;
    }
    cout << c % MOD;
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
