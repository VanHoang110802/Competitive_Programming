#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string s;
int cnt = 0;

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	int n = s.length();
	for(int i = 0; i < n; ++i)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') cnt++;
    }
    int cnt1 = n - cnt;
    if(cnt1 < cnt)
    {
        strupr((char*)s.c_str());
        cout << s << '\n';
    }
    else
    {
        strlwr((char*)s.c_str());
        cout << s << '\n';
    }
    return 0;
}
