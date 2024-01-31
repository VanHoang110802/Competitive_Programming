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
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int n; cin >> n;
        int cnt = 0;
        for(int i = 1; i <= sqrt(n); ++i)
        {
            if(n % i == 0)
            {
                if(i * i == n) cnt++;
                else cnt += 2;
            }
        }
        cout << cnt << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
 
