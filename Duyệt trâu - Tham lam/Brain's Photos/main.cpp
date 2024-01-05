#include <iostream>
using namespace std;

#define int long long
int n, m;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
	int check=1;
	for(int i = 0; i < n * m; ++i)
	{
		char c;
		cin >> c;
		if (c != 'B' && c != 'G' && c != 'W')
		{
			check = 0;
		}
	}
	if(check)
	{
	    cout << "#Black&White\n";
	}
	else
	{
		cout << "#Color\n";
	}
    return 0;
}
