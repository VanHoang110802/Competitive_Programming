#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define fi first
#define se second

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        for(int i = 0; i < n; ++i)
        {
            int k;
            cin >> k;
            ans.push_back(k);
        }

        int ans1 = ans[0];
        for(int i = 1; i < n; ++i)
        {
            ans1 = ans1 & ans[i];
        }

        cout << ans1 << '\n';
    }
    return 0;
}
