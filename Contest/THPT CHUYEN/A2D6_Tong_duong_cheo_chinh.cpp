#include<bits/stdc++.h>
using namespace std;
#define MAX 101

int Tong(int a[][MAX], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum=sum+a[i][i];
	return sum;
}

int main()
{
    int a[MAX][MAX], n;
    cin >> n;

    for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> a[i][j];

	int kq = Tong(a,n);
	cout << kq;
    return 0;
}
