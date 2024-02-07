#include<bits/stdc++.h>
using namespace std;
#define MAX 101

double tong(int a[][MAX], int j, int n)
{
	double s=0;
	for(int i=0;i<n;i++)
		s=s+a[i][j];
	return s;
}

int tonglonnhat(int a[][MAX], int m, int n)
{
	double max=tong(a,0,n);
	for(int i=0;i<m;i++)
	{
		double t=tong(a,i,n);
		if(max<t) max=t;
	}
	return max;
}

int main()
{
    int a[MAX][MAX], n;
    cin >> n;

    for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> a[i][j];

	int kq = tonglonnhat(a,n,n);
	cout << kq;
    return 0;
}
