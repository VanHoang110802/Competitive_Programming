#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e6 + 7;
int a[MAXN];
int n;

void Nhap()
{
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

void XuLy()
{
    sort(a + 1, a + n + 1);
    cout << a[n] * a[n - 1] * a[n - 2];
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
