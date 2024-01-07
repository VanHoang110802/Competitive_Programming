#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

#define int long long
int test;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test;
    while(test--)
    {
        int a, b, c; cin >> a >> b >> c;
        int x = a + b;
        int y = a - b;
        if(x == c) cout << '+' << '\n';
        else if(y == c) cout << '-' << '\n';
    }
    return 0;
}
