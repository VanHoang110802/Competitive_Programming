#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string a,b;
    cin >> a >> b;
    int x, y, m, n;
    n = a.size();
    m = b.size();
    x = a[n - 1] - '0';
    y = b[m - 1] - '0';
    if(m == 1 && y == 0)
    {
        cout << 1;
        return;
    }
    if(m >= 2)
    {
        y = (b[m - 2] - '0') * 10 + y;
    }
    if(x == 1)
    {
        cout << 1;
        return;
    }
    if(x == 0)
    {
        cout << 0;
        return;
    }
    if(x == 5)
    {
        cout << 5;
        return;
    }
    if(x == 6)
    {
        cout << 6;return;
    }
    if(x == 9)
    {
        if(y % 2) cout << 9;
        else cout << 1;
        return;
    }
    if(x == 4)
    {
        if(y % 2) cout << 4;
        else cout << 6;
        return;
    }
    if(x == 2)
    {
        if(y % 4 == 1) cout << 2;
        if(y % 4 == 2) cout << 4;
        if(y % 4 == 3) cout << 8;
        if(y % 4 == 0) cout << 6;
        return;
    }
    if(x == 3)
    {
        if(y % 4 == 1) cout << 3;
        if(y % 4 == 2) cout << 9;
        if(y % 4 == 3) cout << 7;
        if(y % 4 == 0) cout << 1;
        return;
    }
    if(x==7)
    {
        if(y % 4 == 1) cout << 7;
        if(y % 4 == 2) cout << 9;
        if(y % 4 == 3) cout << 3;
        if(y % 4 == 0) cout << 1;
        return;
    }
    if(x==8)
    {
        if(y % 4 == 1) cout << 8;
        if(y % 4 == 2) cout << 4;
        if(y % 4 == 3) cout << 2;
        if(y % 4 == 0) cout << 6;
        return;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
