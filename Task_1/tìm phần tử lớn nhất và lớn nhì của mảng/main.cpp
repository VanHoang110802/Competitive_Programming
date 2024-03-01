#include <iostream>
#include <set>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];
int n, MAX = -1e18;
set<int> SET;

void Nhap()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        SET.insert(a[i]);
        if(a[i] > MAX) MAX = a[i];
    }
}

void XuLy()
{
    int x = SET.size();
    if(x == 1 && n == 1) cout << -1 << ' ' << -1 << '\n';
    else if(x == 1 && n > 1)
    {
        cout << -1 << ' ' << MAX << '\n';
    }
    else
    {
        cout << *SET.upper_bound(MAX) << ' ' << *SET.lower_bound(MAX) << '\n';
    }
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
