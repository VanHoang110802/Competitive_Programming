#include <iostream>
#include <algorithm>
using namespace std;

int n;
int64_t a[6];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int j = 0; j < n; ++j)
    {
        for(int i = 0; i < 6; ++i) cin >> a[i];
        sort(a, a + 6);
        if(a[0] * a[5] - a[1] * a[4] <= 0) cout << a[0] << ' ' << a[4] << ' ' << a[1] << ' ' << a[5] << '\n';
        else cout << a[1] << ' ' << a[5] << ' ' << a[0] << ' ' << a[4] << '\n';
    }
    return 0;
}
