/*
n = 40 đơ máy luôn :)

cách thức nó chạy:
                   fun(4);
                   /
                fun(3), print(3), fun(2)(prints 0 1)
               /
           fun(2), print(2), fun(1)(prints 0)
           /
       fun(1), print(1), fun(0)(does nothing)
       /
    fun(0), print(0), fun(-1) (does nothing)
    
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

void DeQuy(int x)
{
    if(x > 0)
    {
        DeQuy(--x);
        cout << x << '\n';
        DeQuy(--x);
    }
}

signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int n; cin >> n;
        DeQuy(n);
        cout << '\n';
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
