#include <iostream>
#include <iomanip>
using namespace std;

int calc(int n, int x)
{
    int res = 0;
    for (int i = 1; i <= n; i *= x)
    {
        res += n / i;
    }
    return res;
}

void XuLy()
{
    int n, k;
    cin >> n >> k;
    int res = min(calc(n, 2) - calc(n - k, 2) - calc(k, 2), calc(n, 5) - calc(n - k, 5) - calc(k, 5));
    cout << res << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    cin >> test;
    while(test--)
    {
        XuLy();
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
