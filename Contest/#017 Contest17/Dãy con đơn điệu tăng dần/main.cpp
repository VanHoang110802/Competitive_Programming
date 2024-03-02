/// O(N^2)
#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], F[MAXN];
int n;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    F[1] = 1;
    for(int i = 2; i <= n; ++i)
    {
        F[i] = 1;
        for(int j = 1; j <= i - 1; ++j)
        {
            if(a[j] <= a[i])
            {
                F[i] = max(F[i], F[j] + 1);
            }
        }
    }
    int ans = -1;
    for(int i = 1; i <= n; ++i)
    {
        ans = max(F[i], ans);
    }
    cout << ans << '\n';
    return 0;
}
