#include<iostream>
 
using namespace std;

int main()
{
  int n;
  cin>>n;
  int r=0,r1=0;
  for(int i=1;i<=n;i++)
  {
        int a,b;
        cin>>a>>b;
        if(a>b) r++;
        else if(a<b) r1++;
  }
  if(r>r1) cout<<"Mishka"<<endl;
  else if(r1>r) cout<<"Chris"<<endl;
  else cout<<"Friendship is magic!^^"<<endl;
  return 0;
}
