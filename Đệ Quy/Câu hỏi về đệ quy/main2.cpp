/*
Hãy suy nghĩ hàm này sẽ hoạt động như nào?
void fun(int n)
{
	if(n == 0) return;
	fun(n / 2);
	cout << n % 2;
}

giả sử n = 10,
n = 10
fun(10): fun(10 / 2) = fun(5)	-> in ra 0
fun(5): fun(5 / 2) = fun(2)	-> in ra 1	
fun(2): fun(2 / 2) = fun(1)	-> in ra 0
fun(1): fun(1 / 2) = fun(0)	-> in ra 1
mà fun(0) = 0
-> 1010

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

void DeQuy(int n)
{
	if(n == 0) return;
	DeQuy(n / 2);
	cout << n % 2;
}

signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        int n; cin >> n;
        DeQuy(n);
        cout << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
