#include<bits/stdc++.h>
using namespace std;
#define MAX 102

int Tong(int a[][MAX],int n)
{
    int sum=0;
    //duyet hang cua ma tran
    for(int i=1; i<=n ;i++)
    {
        //duyet cot cua ma tran
        for(int j =1; j<=n; j++)
        {
            if(i+j == n+1 && a[i][j] % 2 == 1)
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int a[MAX][MAX], n;
    cin >> n;

    for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin >> a[i][j];

	int kq = Tong(a,n);
	cout << kq;
    return 0;
}
