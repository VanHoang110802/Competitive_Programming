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
	if(n > 1) DeQuy(n - 1);
	for(int i = 0; i < n; ++i) cout << " * ";
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
