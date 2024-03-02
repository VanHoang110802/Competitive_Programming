#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 1e6 + 1;
double prefix[MAXN];
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
        int x; cin >> x;
        prefix[i] = prefix[i - 1] + x;
    }
    int q; cin >> q;
    while(q--)
    {
        int a, b; cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        HoangDepTrai();
    }
    return 0;
}
