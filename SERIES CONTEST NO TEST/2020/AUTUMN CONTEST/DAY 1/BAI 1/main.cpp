#include <iostream>
#include <iomanip>
using namespace std;

void XuLy()
{
    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    int res = c1 + c2 + c3;
    int type = 1;
    if (res > 2 * c1 + 2 * c2)
    {
        res = 2 * c1 + 2 * c2;
        type = 2;
    }
    if (res > 2 * c2 + 2 * c3)
    {
        res = 2 * c2 + 2 * c3;
        type = 3;
    }
    if (res > 2 * c3 + 2 * c1)
    {
        res = 2 * c3 + 2 * c1;
        type = 4;
    }
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
