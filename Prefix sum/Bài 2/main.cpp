#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int LCM(int x, int y)
{
    return (x * y) / __gcd(x, y);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        int a, b, q; cin >> a >> b >> q;
        while(q--)
        {
            int l, r; cin >> l >> r;
            cout << (r / LCM(a, b)) - ((l - 1)/LCM(a, b)) << '\n';
        }
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
