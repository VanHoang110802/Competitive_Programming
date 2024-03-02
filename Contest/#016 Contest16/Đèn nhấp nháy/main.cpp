#include <iostream>
#include <cmath>
using namespace std;

#define int long long
const double esp = 1e-18;
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int CheckNguyen(double x)
{
    if((x - (int)x) < esp) return x;
    return x++;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        int p, q, n; cin >> p >> q >> n;
        cout << CheckNguyen(sqrt(q)) - CheckNguyen(sqrt(p - 1)) << '\n';
    }
    return 0;
}
