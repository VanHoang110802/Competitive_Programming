#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int n;
int dp[MAXN];
struct node
{
    int a,b;
};

bool cmp(node c, node d)
{
    return c.a < d.a;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<node> arr(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i].a >> arr[i].b;
    }
    sort(arr.begin(), arr.end(), cmp);
    dp[0] = 1;
    for(int i = 1; i < n; ++i)
    {
        dp[i] = 1;
        for(int j = 0; j < i; ++j)
        {
            if(arr[j].b <= arr[i].a)
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        if(dp[i] > ans)
        {
            ans = dp[i];
        }
    }
    cout << ans << '\n';
    return 0;
}
