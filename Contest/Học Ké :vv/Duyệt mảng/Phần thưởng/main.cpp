#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], b[MAXN];

int Max_S(int x[], int n, int k)
{
    int sum = 0, sum_max = -1e18;
    for(int i = 1; i <= k; ++i) sum += x[i];
    sum_max = sum;
    for(int i = k + 1; i <= n; ++i)
    {
        sum = sum - x[i - k] + x[i];
        sum_max = max(sum_max, sum);
    }
    return sum_max;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, w, h, ans = 0;
    cin >> m >> n >> w >> h;
    for(int i = 1; i <= m; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) cin >> b[i];
    ans = h * Max_S(a, m, w) + w * Max_S(b, n, h);
    cout << ans << '\n';
    return 0;
}
