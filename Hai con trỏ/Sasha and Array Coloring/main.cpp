#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int test;

void CinTest(int x)
{
    if(x > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    CinTest(1);
    while(test--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        int l = 0, r = n - 1, ans = 0;
        while(l < r)
        {
            ans += a[r] - a[l];
            ++l;
            --r;
        }
        cout << ans << '\n';
    }
    return 0;
}
