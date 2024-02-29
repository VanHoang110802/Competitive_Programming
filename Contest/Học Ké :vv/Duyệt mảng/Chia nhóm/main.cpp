#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k, s, cnt = 0; cin >> n >> k;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        a[i] = abs(a[i]);
    }
    sort(a + 1, a + n + 1);
    int p = 1;
    a[n + 1] = 1e9;
    for(int i = 2; i <= n + 1; ++i)
    {
        if(a[i] - a[p] > k)
        {
            cnt++;
            p = i;
        }
    }
    cout << cnt << '\n';
    return 0;
}
