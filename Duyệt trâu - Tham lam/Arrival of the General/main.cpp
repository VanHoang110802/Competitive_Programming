#include <iostream>
#include<algorithm>
using namespace std;
int n,val,temp,posmin,maxx=-111,minn=111;
int main()
{
  cin>>n;
  for(int i=0;i<n;++i)
  {
    cin>>val;
    if (val>maxx)
    {
      maxx=val;
      temp=i;
    }
    else
    {
      if (val==maxx)
      {
        temp=min(temp,i);
      }
    }
    if (val<minn)
    {
      minn=val;
      posmin=i;
    }
    else
    {
      if (val==minn)
      {
        posmin=max(posmin,i);
      }
    }
  }
  temp++;
  posmin++;
  int tot=0;
  if (posmin<temp)
  {
    tot--;
  }
  tot+=n-posmin;
  tot+=temp-1;
  cout<<tot<<'\n';
  return 0;
}
