#include <iostream>
#include <ctime>
using namespace std;

#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

bool CheckNguyenTo(int n)
{
    for(int i = 2; i * i <= n; ++i) if(n % i == 0) return false;
    return (n > 1);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        int n, cnt = 0;
        cin >> n;
        for(int i = 1; i * i <= n; ++i) if(CheckNguyenTo(i)) cnt++;

        cout << cnt << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
