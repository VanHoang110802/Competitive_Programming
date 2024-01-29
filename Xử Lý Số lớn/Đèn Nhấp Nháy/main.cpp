#include <iostream>
#include <cmath>
using namespace std;

#define int long long
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
        int p, q, n; cin >> p >> q >> n;
        cout << round(sqrt(q - p)) - 1 << '\n';
    }
    return 0;
}
