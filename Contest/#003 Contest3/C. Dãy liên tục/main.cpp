#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
int n;
long long dem[MAXN];

void Nhap()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        long long x;
        cin >> x;
        if(x <= n) dem[x]++;
    }
}

void XuLy()
{
    int cnt = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(dem[i] == 0) cnt++;
    }
    cout << cnt;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
