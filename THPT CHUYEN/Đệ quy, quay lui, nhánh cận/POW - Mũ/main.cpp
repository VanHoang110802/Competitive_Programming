#include <iostream>
#include <iomanip>
using namespace std;

#define int long long
const int M = 1e9+7;

int calcpow(int x, int n, int mod)
{
    if (n == 0)
    {
        return 1;
    }
    int ret = calcpow(x, n / 2, mod);
    (ret *= ret) %= mod;
    if (n % 2 == 1)
    {
        (ret *= x) %= mod;
    }
    return ret;
}

int calc(int x, int n, int mod)
{
    int res = 0;
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        (res += calcpow(x, n, mod)) %= mod;
        (res += calc(x, n - 1, mod)) %= mod;
    }
    else
    {
        int mul = (1 + calcpow(x, n / 2 + 1, mod)) % mod;
        (mul *= calc(x, n / 2, mod)) %= mod;
        res = mul;
    }
    return res;
}

void XuLy()
{
    int x, n;
    cin >> x >> n;
    cout << calc(x, n, M) << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    XuLy();
    cout << "\n\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.";
    return 0;
}
