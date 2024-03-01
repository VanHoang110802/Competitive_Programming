#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], b[MAXN], c[2 * MAXN];
int n, m;

void Nhap()
{
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= m; ++i) cin >> b[i];
}

void XuLy()
{
    int i = 1, j = 1, idx = 1;
    while(i <= n || j <= m)
    {
        if (j == m + 1 || (i <= n && a[i] <= b[j]))
        {
            c[idx] = a[i];
            ++i;
        }
        else
        {
            c[idx] = b[j];
            ++j;
        }
        ++idx;
    }
    for(int k = 1; k < idx; ++k) cout << c[k] << ' ';
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
