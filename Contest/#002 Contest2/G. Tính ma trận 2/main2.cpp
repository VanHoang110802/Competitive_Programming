#include <iostream>
#include <ctime>
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
        int n, m; cin >> n >> m;
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= m; ++j)
            {
                if(i % 2 != 0) cout << (i - 1) * m + j << ' ';
                else cout << (i - 1) * m + m - (j - 1) << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
