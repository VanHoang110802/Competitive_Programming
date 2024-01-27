#include <iostream>
#include <string>
using namespace std;

#define fi first
#define se second
#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        string s; cin >> s;
        cout << 9 * (s.length() - 1) + (s[0] - 48) << '\n';
    }
    return 0;
}
