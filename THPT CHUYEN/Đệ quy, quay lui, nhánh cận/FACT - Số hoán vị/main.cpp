#include <iostream>
#include <iomanip>
using namespace std;

#define int long long

int HoanVi(int n)
{
    if(n == 1) return 1;
    return n * HoanVi(n - 1);
}

void XuLy()
{
    int n;
    cin >> n;
    cout << HoanVi(n) << '\n';
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
