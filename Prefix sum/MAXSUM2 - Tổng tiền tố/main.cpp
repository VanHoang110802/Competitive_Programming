#include <iostream>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], prefix[MAXN], tg[MAXN];
int test;

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
        cin >> a[i];
        prefix[i] = prefix[i - 1] + abs(a[i]);
        tg[i] = tg[i - 1] + (a[i]);
    }
    cout << prefix[n] + tg[n] << ' ';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    CinTest(1 - 1);
    while(test--)
    {
        HoangDepTrai();
    }
    return 0;
}
