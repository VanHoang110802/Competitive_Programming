#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1000;
int n, a[MAXN], ans = 0;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++)
    {
		while(a[i] != 0)
		{
			int tmp = a[i];
			for(int j = i + 1; j <= n; j++)
			{
				if(a[j] == 0) break;
				tmp = min(tmp, a[j]);
			}
			ans += tmp;
			for(int j = i; j <= n; j++)
			{
				if(a[j] == 0) break;
				a[j] -= tmp;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
