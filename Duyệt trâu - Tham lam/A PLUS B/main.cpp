#include <iostream>
using namespace std;

#define int long long
int test;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test;
    while(test--)
    {
        string s; cin >> s;
        int a = s[0] - '0';
        int b = s[2] - '0';
        cout << a + b << '\n';
    }
    return 0;
}
