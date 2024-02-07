#include<bits/stdc++.h>
using namespace std;
#define MAX 101

double tong(int a[][MAX], int i, int n)
{
	double s=0;
	for(int j=0;j<n;j++)
		s=s+a[i][j];
	return s;
}

int tonglonnhat(int a[][MAX], int m, int n)
{
	int i,d;
	double max=tong(a,0,n);
	for( i=0;i<m;i++)
	{
		double t=tong(a,i,n);
		if(max<t)
		{
			max=t;
		}
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
