#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long

void XuLy()
{
    int n;
    cin >> n;
    if(n == 1) cout << 1;
    else
    {
        int a[n + 1];
        for(int i = 1; i <= n; ++i) cin >> a[i];
        for(int i = 1; i <= n; ++i) if(a[i] < 0) a[i] *= -1;
        sort(a + 1, a + n + 1);
        cout << (a[n] * a[n]) + (a[n - 1] * a[n - 1]);
    }
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
