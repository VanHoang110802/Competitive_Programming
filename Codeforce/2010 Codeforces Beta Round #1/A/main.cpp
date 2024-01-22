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

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int a, b, c, ans = 0; cin >> a >> b >> c;
        if(a % c == 0)
        {
            ans = a / c;
        }
        else
        {
            ans = a / c + 1;
        }
        if(b % c == 0)
        {
            ans = ans * (b / c);
        }
        else
        {
            ans = ans * ((b / c) + 1);
        }
        cout << ans << '\n';
    }
    return 0;
}
