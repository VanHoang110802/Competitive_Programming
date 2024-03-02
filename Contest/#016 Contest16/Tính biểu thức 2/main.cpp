#include <iostream>
using namespace std;

#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int l, r;
        cin >> l >> r;
        cout << (l + r) * (r - l + 1) / 2 << '\n';
    }
    return 0;
}
