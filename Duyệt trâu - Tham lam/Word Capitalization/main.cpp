#include <iostream>
#include <string>
using namespace std;

string s;

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s;
    if(s[0] >= 'a' && s[0] <='z') s[0] -= 32;
    cout << s;
    return 0;
}
