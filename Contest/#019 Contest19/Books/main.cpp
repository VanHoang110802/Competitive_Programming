#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int a[MAXN];
int n, k;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    int l = 1, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
        while (sum > k)
        {
            sum -= a[l];
            l++;
        }
        if (ans < i - l + 1)
        {
            ans = i - l + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}
