#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int MAXN = 1e5;
int a[MAXN];

signed main()
{
    int n; cin >> n;
    int MIN = 0, MAX = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        MIN = min(MIN, a[i]);
        MAX = max(MAX, a[i]);
    }
    cout << (MAX - MIN) * 2 << '\n';
    return 0;
}
