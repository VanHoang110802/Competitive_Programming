#include <iostream>
#include <iomanip>
using namespace std;

void XuLy()
{
    cout << 1 << '\n';
    cout << 100000 << '\n';
    for (int i = 1; i <= 100000; i++)
    {
        cout << 1000 << ' ';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test = 1;
    //cin >> test;
    while(test--)
    {
        XuLy();
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
