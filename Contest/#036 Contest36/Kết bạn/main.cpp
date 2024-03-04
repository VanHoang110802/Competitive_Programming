#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e6 + 7;
int a[MAXN];
int n, B, ans = 0;

void Nhap()
{
    cin >> n >> B;
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

void Xuly()
{
    sort(a + 1, a + n + 1);
    for(int i = 2; i <= n; ++i)
    {
        int L1 = lower_bound(a + 1, a + i, B - a[i]) - a;
        int L2 = upper_bound(a + 1, a + i, B - a[i]) - a - 1;
        if(L1 <= L2)
        {
            ans += (L2 - L1 + 1);
        }
    }
    cout << ans << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Nhap();
    Xuly();
    return 0;
}
