#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define int long long
int test;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test;
    string s = "codeforces";
    while(test--)
    {
        char c; cin >> c;
        if(s.find(c) != -1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
