#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

double DeQuy(int n)
{
    if(n == 1) return (double)1;
    return DeQuy(n - 1) + ((double)1/(n * n * n));
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int n; cin >> n;
        cout << fixed << setprecision(5) << DeQuy(n) << '\n';
    }
    return 0;
}
