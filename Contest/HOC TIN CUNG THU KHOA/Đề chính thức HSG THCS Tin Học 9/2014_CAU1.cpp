#include <bits/stdc++.h>
using namespace std;

long long x, y;

int main()
{
    freopen("CAU1.inp", "r", stdin);
    freopen("CAU1.out", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long aa,bb,cc,dd; cin >> aa>>bb>>cc>>dd;
    long long temp1 = aa * dd - cc*bb;
    long long temp2 = bb * dd;
    long long c = 1e5+1;

    if (c > (temp1 / temp2))
    {
        c = temp1 / temp2;
        x = temp1;
        y = temp2;
    }
    long long u = x / (__gcd(x, y)), v = y / (__gcd(x, y));
    if (u > 0 && v < 0)
    {
        u = -u;
        v = -v;
    }
    cout << u << " " << v;
    return 0;
}
