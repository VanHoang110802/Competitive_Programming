#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long x,x2,y,y2,g,a,b,c,k;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> x >> y >> x2 >> y2;
    a = y2 - y;
    b = x - x2;
    if(a == 0 || b == 0) k = abs(a) + abs(b);
    else k = abs(__gcd(a, b));
    cout << k + 1;
    return 0;
}
