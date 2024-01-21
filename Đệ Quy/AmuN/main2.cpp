#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int DeQuy(int a, int n, int mod)
{
    if(n == 0) return 1;
    if(a == 0) return 0;
    if(n % 2 == 0)
    {
        int temp = DeQuy(a, n / 2, mod);
        return (temp * temp) % mod;
    }
    else return (a * DeQuy(a, n - 1, mod)) % mod;
}

int NotDeQuy(int a, int n, int mod) // nhanh hon de quy 1 chut
{
    a %= mod;
    int ans = 1;
    while(n > 0)
    {
        if(n & 1)
        {
            ans = ans * a % mod;
        }
        a = a * a % mod;
        n >>= 1;
    }
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int a, n, mod; cin >> a >> n >> mod;
        cout << DeQuy(a, n, mod) << '\n';
        cout << NotDeQuy(a, n, mod) << '\n';
    }
    return 0;
}
