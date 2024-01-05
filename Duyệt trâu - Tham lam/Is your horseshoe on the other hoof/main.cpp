#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n = 4;
int main()
{
  int a[n];
  for(int i=0;i<n;++i)
  {
    cin >> a[i];
  }
  sort(a, a+n);
  int cnt = 0, cnt1 = 0;
  for(int i=0;i<n-1;++i)
  {
    if(a[i] == a[i+1])
    {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}
