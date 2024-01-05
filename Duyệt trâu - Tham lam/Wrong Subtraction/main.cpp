#include <iostream>
using namespace std;

#define int long long
int n, k;

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	while(k--)
	{
		if(n % 10 != 0)
		{
			n--;
		}
		else
		{
			n/=10;
		}
	}
	cout << n;
    return 0;
}
