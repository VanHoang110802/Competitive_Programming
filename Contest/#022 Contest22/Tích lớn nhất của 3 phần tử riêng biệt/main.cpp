#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
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
    int max_1 = -1e18, max_2 = 1e18, max_3 = 1e18, min_1 = 1e18, min_2 = 1e18;
    for(int i = 1; i <= n; ++i)
    {
        if(a[i] > max_1)
        {
            max_3 = max_2;
            max_2 = max_1;
            max_1 = a[i];
        }
        else if(a[i] > max_2 && a[i] != max_1)
        {
            max_3 = max_2;
            max_2 = a[i];
        }
        else if(a[i] > max_3 && a[i] != max_1 && a[i] != max_2)
        {
            max_3 = a[i];
        }
        if(a[i] < min_1)
        {
            min_2 = min_1;
            min_1 = a[i];
        }
        else if(a[i] < min_2 && a[i] != min_1)
        {
            min_2 = a[i];
        }
    }
    cout << max(min_1 * min_2 * max_1, max_1 * max_2 * max_3);
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
