#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
double a[MAXN], prefix[MAXN], tg[MAXN];

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

void HoangDepTrai()
{
    int n; cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        double x = (double)1/(i * (i + 1));
        prefix[i] = prefix[i - 1] + x;
    }
    cout << fixed << setprecision(5) << prefix[n] << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(-1);
    while(test--)
    {
        HoangDepTrai();
    }
    return 0;
}
