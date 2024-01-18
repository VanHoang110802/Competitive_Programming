/*
fun(99) = fun(fun(110)) since 99 ? 100
           = fun(100)    since 110 > 100
           = fun(fun(111)) since 100 ? 100
           = fun(101)    since 111 > 100
           = 91        since 101 > 100
*/

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int DeQuy(int n)
{
    if(n > 100) return n - 10;
    return DeQuy(DeQuy(n + 11));
}

signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int n; cin >> n;
        cout << DeQuy(n);
        cout << '\n';
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
