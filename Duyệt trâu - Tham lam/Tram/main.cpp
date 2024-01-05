#include<iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    int a[n] = {0};
    for(int i=0;i<n;++i)
    {
    	int x, y;
    	cin >> x >> y;
    	a[i] -= x;
    	a[i] += y;
    	a[i+1] = a[i];
	}
	int MAX = a[0];
	for(int i=1;i<n;++i)
	{
		MAX = max(a[i], MAX);
	}
	cout << MAX;
    return 0;
}
