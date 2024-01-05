#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int t, n, cnt1 = 0, cnt2 = 0;
int main()
{
  cin >> t >> n;
  while(1)
  {
    t--;
    n--;
    cnt1++;
    if(t == 0 || n == 0) break;
  }
  while(n!= 0)
  {
    if(n == 1) break;
    n-=2;
    cnt2++;
  }
  while(t!= 0)
  {
    if(t == 1) break;
    t-=2;
    cnt2++;
  }
  cout << cnt1 << ' ' << cnt2;
  return 0;
}
