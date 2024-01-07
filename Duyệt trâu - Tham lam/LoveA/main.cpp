#include<iostream>
using namespace std;

char x;
int n, a;

signed main()
{
  while(cin >> x)
  {
		n++;
		if(x == 'a') a++;
	}
	cout << min(a * 2 - 1, n) << '\n';
	return 0;
}
