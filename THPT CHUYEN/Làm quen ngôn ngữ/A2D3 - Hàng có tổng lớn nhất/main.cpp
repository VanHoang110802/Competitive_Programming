#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long
const int MAXN = 1e2 + 7;

double tong(int a[][MAXN], int i, int n)
{
    double s = 0;
    for(int j = 0; j < n; j++)
    {
        s = s + a[i][j];
    }
    return s;
}

int tonglonnhat(int a[][MAXN], int m, int n)
{
    int d;
    double max = tong(a, 0, n);
    for(int i = 0; i < m; i++)
    {
        double t = tong(a, i, n);
        if(max < t)
        {
            max = t;
        }
    }
    return max;
}

void XuLy()
{
    int a[MAXN][MAXN], n;
    cin >> n;
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> a[i][j];
    int kq = tonglonnhat(a, n, n);
    cout << kq;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    XuLy();
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
