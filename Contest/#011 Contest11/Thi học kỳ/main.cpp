#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n,m,g,a,b,c,k;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    a = m - 1;
    b = 1 - n;
    c = m - n;
    g = __gcd(a, b);
    k = (n - 1) * g / b;
    cout << abs(k) + 1;
    return 0;
}
