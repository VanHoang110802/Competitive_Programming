#include <iostream>

using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], PreMax[MAXN], PostMin[MAXN];
int n, ans = -1e18;

void Nhap()
{
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

void XuLy()
{
    PreMax[0] = -1e18;
    PostMin[n + 1] = 1e18;
    for(int i = 1; i <= n; ++i)
    {
        PreMax[i] = max(PreMax[i - 1], a[i]);
    }
    for(int i = n; i >= 1; --i)
    {
        PostMin[i] = min(PostMin[i + 1], a[i]);
    }
    for(int i = 2; i <= n - 1; ++i)
    {
        ans = max(ans, PreMax[i - 1] + a[i] - PostMin[i + 1]);
    }
    cout << ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
