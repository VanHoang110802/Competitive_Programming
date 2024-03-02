#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 1e3 + 7;
double prefix[MAXN];
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

void F()
{
    for(int i = 1; i <= MAXN; ++i)
    {
        prefix[i] = sqrt(i);
        for(int j = i - 1; j > 0; j--)
        {
            prefix[i] = sqrt(prefix[i] + j);
        }
    }
}

void HoangDepTrai()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(5) << prefix[n] << '\n';
}

signed main()
{
    F();
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        HoangDepTrai();
    }
    return 0;
}
