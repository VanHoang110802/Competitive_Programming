#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
int t, d[4];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
	while(t--)
	{
		cin >> d[1] >> d[2] >> d[3];
		sort(d + 1, d + 4);
		cout << d[2] << '\n';
	}
    return 0;
}
