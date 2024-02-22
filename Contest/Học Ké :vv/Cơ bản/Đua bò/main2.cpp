#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], cnt[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, ans = 0; cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if(a[i] > 0) cnt[a[i]]++;
    }
    for(int i = 1; i <= 1000; ++i)
    {
        ans = ans + ((cnt[i] * (cnt[i] - 1)) / 2);
    }
    cout << ans << '\n';
    return 0;
}
