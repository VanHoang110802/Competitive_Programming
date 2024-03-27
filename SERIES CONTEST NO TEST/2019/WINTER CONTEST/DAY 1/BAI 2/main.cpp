#include <iostream>
#include <iomanip>
using namespace std;

void XuLy()
{
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        cout << j << ' ' << j << '\n';
    }
    cout << "##########" << '\n';
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
