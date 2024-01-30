#include <iostream>
using namespace std;

#define ull unsigned long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        ull q, k, l, r; cin >> q >> k >> l >> r;
        while(q--)
        {
             cout << (r / k) - ((l - 1)/k) << '\n';
        }
    }
    return 0;
}
