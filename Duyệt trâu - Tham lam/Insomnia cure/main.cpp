#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int k, l,m,n,d,cnt=0;
  cin >> k >> l >> m>>n >>d;
  for(int i=1;i<=d;++i)
  {
    if((i%k && i%l && i%m && i%n) == 0) cnt++;
  }
  cout << cnt;
  return 0;
}
