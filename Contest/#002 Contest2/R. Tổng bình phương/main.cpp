#include <iostream>
#include <ctime>
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
        int l, r, tong = 0;
        cin >> l >> r;
        for(int i = l; i <= r; ++i)
        {
            tong += (i * i);
        }
        cout << tong << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
