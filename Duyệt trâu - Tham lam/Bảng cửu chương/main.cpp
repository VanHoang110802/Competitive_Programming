#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <algorithm>
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
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        int n; cin >> n;
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= 10; ++j)
            {
                cout << i * j << ' ';
            }
            cout << '\n';
        }
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
