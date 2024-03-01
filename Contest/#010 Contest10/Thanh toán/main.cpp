#include <iostream>
#include <set>
using namespace std;

typedef int64_t ll;
const int MAX_N = 100001;
int n, c = 10;
ll a[MAX_N];
ll dp[MAX_N], sm[MAX_N];
multiset<int> now;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    now.insert(0);
    dp[0] = 0;
    sm[0] = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        dp[i] = dp[i - 1] + a[i];
        sm[i] = sm[i - 1] + a[i];
        now.insert(a[i]);
        if (i >= c)
        {
            now.erase(now.find(a[i - c]));
            dp[i] = min(dp[i], dp[i - c] - sm[i - c] + sm[i] - *now.begin());
        }
    }
    cout << dp[n];
    return 0;
}
