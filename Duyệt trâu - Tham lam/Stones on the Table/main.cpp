#include <iostream>
#include <string>
using namespace std;

string s;
int n, cnt = 0;

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	for(int i = 0; i < n; ++i)
	{
		if(s[i] == s[i+1])
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
