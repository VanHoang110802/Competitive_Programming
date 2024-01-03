#include <iostream>
#include <algorithm>
using namespace std;
int n, k;
int main()
{
  cin >> n >> k;
  int a[n+1], s = 0, MAX = 0;
  for(int i=1;i<=n;++i)
  {
    a[i] = (i*5);
    s +=a[i];
    if((s+k) <= 240)
    {
      MAX = max(MAX,i);
    }
  }
  cout << MAX;
  return 0;
}
