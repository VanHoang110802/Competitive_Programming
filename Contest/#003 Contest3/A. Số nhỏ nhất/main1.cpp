#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
int n, MIN = INT_MAX;
int a[MAXN];
map <int, int> MAP;

void Nhap()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        MAP[a[i]]++;
    }
}

void XuLy()
{
    for(auto x:MAP)
    {
        if((int)x.second == 1)
        {
            cout << x.first;
            return;
        }
    }
    cout << "khong";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
 
