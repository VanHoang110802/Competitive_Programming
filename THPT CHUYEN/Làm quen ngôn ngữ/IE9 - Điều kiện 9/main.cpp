#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long

void XuLy()
{
    vector<int> a;
    for(int i = 0; i < 5; ++i)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cout << a[1];
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
