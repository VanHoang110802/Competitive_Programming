#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXN = 8005;
int n, tong = 0;
int dem[MAXN];

void Nhap()
{
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        dem[a[i] - 10102010]++;
    }
}

void XuLy()
{
    for(int i = 0; i <= MAXN; ++i)
    {
        if(dem[i] > 0)
        {
            if (dem[i] < 6) tong = tong + 100;
            else tong = tong + 100 + dem[i] - 5;
        }
    }
    cout << tong;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
