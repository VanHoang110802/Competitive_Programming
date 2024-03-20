#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];
int n, k, sum = 0, idx = 1;

void Nhap()
{
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

void XuLy()
{
    for (int i = 1; i <= k; ++i) sum += a[i];

    int ans = sum;
    for (int i = k + 1; i <= n; ++i)
    {
        ans += a[i] - a[i - k];
        if (ans > sum)
        {
            sum = ans;
            idx = i - k + 1;
        }
    }

    cout << sum << '\n';
    for (int i = idx; i <= idx + k - 1; ++i) cout << a[i] << ' ';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    Nhap();
    XuLy();
    //cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
