#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
long double a[MAXN], prefix[MAXN], tg[MAXN];

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

void F()
{
    prefix[0] = 0.00000;
    for(int i = 1; i <= MAXN; ++i)
    {
        prefix[i] = prefix[i - 1] + (long double)1 / i;
    }
}

void HoangDepTrai()
{
    int n; cin >> n;
    cout << fixed << setprecision(5) << prefix[n] << '\n';
}

signed main()
{
    F();
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);CinTest(1);
    while(test--)
    {
        HoangDepTrai();
    }
    return 0;
}
