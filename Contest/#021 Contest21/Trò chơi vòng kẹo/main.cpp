#include <iostream>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
int prefix[MAXN], temp_prefix[MAXN], tg[MAXN];

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        int n, m; cin >> n >> m;
        while(m--)
        {
            int l, r; cin >> l >> r;
            if(l <= r)
            {
                tg[l] += 1;
                if(r + 1 <= n) tg[r + 1] -= 1;
            }
            else
            {
                tg[l] += 1;
                tg[1] += 1;
                if(r + 1 <= n) tg[r + 1] -= 1;
            }
        }
        int ans = LLONG_MIN;
        for(int i = 1; i <= n; ++i)
        {
            prefix[i] = prefix[i - 1] + tg[i];
            ans = max(ans, prefix[i]);
        }
        cout << ans << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
