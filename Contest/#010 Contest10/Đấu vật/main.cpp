#include <iostream>
#include <vector>
using namespace std;

int n, k, ans = 0;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    vector<int> p(n + 1), r(n, 0);
    for(int i = 1; i <= n; ++i)
    {
        cin >> k;
        p[k] = i;
    }
    for(int i = 1; i <= n; ++i)
    {
        cin >> k;
        k = (i - p[k] + n) % n;
        ++r[k];
    }
    for(int i = 0; i < n; ++i) if(ans < r[i]) ans = r[i], k = i;
    cout << ans << ' ' << k;
    return 0;
}
