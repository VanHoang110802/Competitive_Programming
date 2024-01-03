#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int a[MAXN];
int m, n, k;

int f(int x)
{
    int s = 0;
    for(int i = 1; i <= n; ++i)
    {
        s += (min(x, m * i) / i);
    }
    return s;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> m >> n >> k;
    int l = 0, r = m * n;
    while(r - l > 1)
    {
        int m = (l + r) / 2;
        if(f(m) >= k) r = m;
        else l = m;
    }
    int x = 0, y = r;
    while(y - x > 1)
    {
        int m = (x + y) / 2;
        if(f(m) >= k) y = m;
        else x = m;
    }
    cout << y << '\n';
    return 0;
}
