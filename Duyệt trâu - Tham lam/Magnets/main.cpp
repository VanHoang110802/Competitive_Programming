#include <iostream>
#include <algorithm>
using namespace std;
int n,a[100001], cnt = 0;

int main()
{
  cin >> n;
  for(int i=0;i<n;++i)
  {
    cin >> a[i];
  }
  for(int i=0;i<n;++i)
  {
    if(a[i] != a[i+1])
    {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}
