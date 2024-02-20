#include <iostream>
using namespace std;

const int MAXN = 1e6 + 7;
int a[MAXN], temp[MAXN];

signed main()
{
	int n, s, ans = 0; cin >> n >> s;
	for(int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		if(s - a[i] > 0 && temp[s - a[i]] > 0)
		{
			ans = ans + temp[s - a[i]];
		}
		temp[a[i]]++;
	}
	cout << ans << '\n';
	return 0;
}
