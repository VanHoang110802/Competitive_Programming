#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];
int n, k;

void Nhap()
{
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

void XuLy()
{
    int max_sum = 0;
    for(int i = 0; i < k; i++) max_sum += a[i];
    int window_sum = max_sum;
    for(int i = k; i < n; i++)
    {
        window_sum += a[i] - a[i - k];
        max_sum = max(max_sum, window_sum);
    }
    cout << max_sum << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
