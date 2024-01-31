#include <iostream>
#include <vector>
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
        vector<int> a;
        for(int i = 1; i <= sqrt(n); ++i)
        {
            if(n % i == 0)
            {

                if(i * i != n)
                {
                  //  cout << n / i << ' ';
                    a.push_back(n / i);
                }
                //cout << i << ' ';
                a.push_back(i);
            }
        }
        sort(a.begin(), a.end());
        for(auto x : a) cout << x << ' ';
        cout << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
 
