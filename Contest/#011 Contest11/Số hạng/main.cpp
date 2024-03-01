#include <iostream>
#include <algorithm>
using namespace std;

int n, p, k, a, b;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    p = 1;
    if((n & 1) == 0) a = n / 2, b = a;
    else
    {
        for(k = 3; k * k <= n; k += 2)
            if(n % k == 0)
            {
                p = k;
                break;
            }
        if(p == 1) a = 1;
        else a = n / p;
        b = n - a;
        if(a > b) swap(a, b);
    }
    cout << a << ' ' << b;
    return 0;
}
