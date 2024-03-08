#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, MAX = -1e18; cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        cout << a[i] + a[i - 1] << ' ';
    }
    return 0;
}
