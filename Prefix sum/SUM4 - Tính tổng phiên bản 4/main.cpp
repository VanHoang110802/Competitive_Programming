#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 1e6 + 1;
long double prefix[MAXN];
int test, s = 1;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

void F()
{
    prefix[1] = 1.00000000;
    for(int i = 2; i <= MAXN; ++i)
    {
        s += i;
        prefix[i] = prefix[i - 1] + (1.00000000 / s);
    }
}

void HoangDepTrai()
{
    int n; cin >> n;
    cout << fixed << setprecision(8) << prefix[n] << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    F();
    CinTest(1);
    while(test--)
    {
        HoangDepTrai();
    }
    return 0;
}
