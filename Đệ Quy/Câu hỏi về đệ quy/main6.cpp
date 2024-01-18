/*
5
12 10 30 50 100

Hàm sẽ trả về giá trị max trong mảng
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

int DeQuy(vector<int> a, int n)
{
    int x;
    if(n == 1) return a[0];
    else x = DeQuy(a, n - 1);
    if(x > a[n - 1]) return x;
    else return a[n - 1];
}

signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        cout << DeQuy(a, n);
        cout << '\n';
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
