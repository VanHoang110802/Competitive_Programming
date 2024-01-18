/*
Hãy suy nghĩ hàm này sẽ hoạt động như nào?
int fun1(int n)
{
    if(n == 1) return 0;   
    return 1 + fun1(n / 2);
}

giả sử n = 5
n = 5
fun1(5): 1 + fun1(5/2) = 1 + fun1(2)
fun1(2): 1 + fun1(2/2) = 1 + fun1(1)
mà fun1(1) = 0
-> fun1(2) = 1
-> fun1(5) = 2

*/

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int DeQuy(int n)
{
    if(n == 1) return 0;
    return 1 + DeQuy(n / 2);
}

signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        int n; cin >> n;
        cout << DeQuy(n) << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
