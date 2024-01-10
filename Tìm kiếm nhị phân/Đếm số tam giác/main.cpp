#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int n; cin >> n;
        int ans = 0;
        vector <int> a(n);
        vector <int> b(n);
        vector <int> c(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];
        for(int i = 0; i < n; ++i) cin >> c[i];
        sort(c.begin(), c.end());
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                int k1 = upper_bound(c.begin(), c.end(), abs(a[i] - b[j])) - c.begin();
                int k2 = lower_bound(c.begin(), c.end(), a[i] + b[j]) - c.begin() - 1;
                if(k1 <= k2) ans += k2 - k1 + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
