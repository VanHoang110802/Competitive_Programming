#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long

void XuLy()
{
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int k;
    cin >> k;
    int tong = 0;
    for(int i = 0; i < k; ++i)
    {
        tong += a[i];
    }
    cout << tong;
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
