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
        int n, m; cin >> n >> m;
        for(int i = 1; i <= n * m; ++i)
        {
            if(i % m == 0) cout << i << '\n';
            else cout << i << ' ';
        }
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
