
#include<iostream>
using namespace std;
 
int n, x, d[201];
 
void nhap()
{
    cin>>n;
    for(int i=1;i<=n;i++) 
    {
		cin>>x;
		d[x+100]++;
    }
}

void xuli()
{    
    for(int i=0;i<=200;i++)
    {
        if(d[i]==1)
        {
            cout<<(i-100);
            return;
        }
    }
    cout<<"khong";
}

int main()
{
    nhap();
    xuli();
    return 0;
}
