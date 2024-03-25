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
    int cnt = 0;
    for(int i = 1; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            if(n / i == i) cnt++;
            else cnt += 2;
        }
    }
    cout << cnt;
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
