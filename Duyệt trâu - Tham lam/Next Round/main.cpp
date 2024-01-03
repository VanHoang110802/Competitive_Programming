#include<bits/stdc++.h>
using namespace std;
int n,k;
 
int main()
{
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int s=A[k-1], count = 0;
    for(int i=0;i<k;i++)
    {
        if(A[i]!=0)
        {
            if(A[i]>=s)
            count++;
        }
    }
    for(int i=k;i<n;i++)
    {
        if(A[i]!=0)
        {
            if(A[i]==s)
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
