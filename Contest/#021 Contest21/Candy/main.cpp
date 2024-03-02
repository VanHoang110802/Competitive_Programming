#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 1;
int prefix[MAXN], a[MAXN];
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

void HoangDepTrai()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }
    int MIN = 1e18;
    for (int i = 1; i <= n; ++i)
    {
        MIN = min(MIN, abs(prefix[n] - (2 * prefix[i])));
    }
    cout << MIN << '\n';
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
