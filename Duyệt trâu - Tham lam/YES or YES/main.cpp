#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define int long long
int t;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
	{
	    string s; cin >> s;
	    transform(s.begin(), s.end(), s.begin(), ::tolower);
	    if((s[0] == 'y' && s[1] == 'e') && s[2] == 's') cout << "YES\n";
        else cout << "NO\n";
	}
    return 0;
}
