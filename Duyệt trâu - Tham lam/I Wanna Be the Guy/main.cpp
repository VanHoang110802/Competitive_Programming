#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;
const int N = 1e+5;
long long int n,a,b,m,l;
int main()
{
  bool used[N];
  cin>>n>>a;
  for (int i=1;i<=a;++i)
  {
    cin>>m;
    used[m] = true;
  }
  cin>>b;
  for(int i=1;i<=b;++i)
  {
    cin>>l;
    used[l] = true;
  }
  for(int i=1;i<=n;++i)
  {
    if( used[i] == false )
    {
      cout << "Oh, my keyboard!";
      return 0;
    }
  }
  cout << "I become the guy.";
  return 0;
}
