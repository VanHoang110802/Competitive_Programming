#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 3;
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int DeQuy(int a, int b, int mod)
{
    if(b == 1) return a % mod;
    else
    {
        if(b % 2)
        {
            return (DeQuy(a, b - 1, mod) + a) % mod;
        }
        else
        {
            return (2 * DeQuy(a, b / 2, mod)) % mod;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(5);
    while(test--)
    {
        vector<int> a;
        for(int i = 0; i < MAXN; ++i)
        {
            int x; cin >> x;
            a.push_back(x);
        }
        int mod;
        cin >> mod;
        sort(a.begin(), a.end());
        if(a[1] > 0)
        {
            cout << DeQuy(abs(a[1]), abs(a[2]), mod);
        }
        else if(a[1] < 0)
        {
            cout << DeQuy(abs(a[0]), abs(a[1]), mod);
        }
        else
        {
            cout << 0;
        }
        cout << '\n';
    }
    return 0;
}
