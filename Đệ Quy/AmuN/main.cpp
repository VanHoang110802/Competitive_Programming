#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

#define int long long
const int mod = 1e9 + 7;
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int DeQuy(int a, int n) /// O(N)
{
    if(n == 0) return 1;
    if(a == 0) return 0;
    return (a * DeQuy(a, n - 1)) % mod;
}

int DeQuy2(int a, int n) /// O(logN)
{
    if(n == 0) return 1;
    if(a == 0) return 0;
    if(n % 2 == 0)
    {
        int temp = DeQuy2(a, n / 2);
        return (temp * temp) % mod;
    }
    else return (a * DeQuy(a, n - 1)) % mod;
}

signed main()
{
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(5);
    while(test--)
    {
        int a, b; cin >> a >> b;
        cout << DeQuy(a, b) << ' ' << DeQuy2(a, b);
        cout << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
