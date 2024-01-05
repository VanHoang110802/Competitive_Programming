#include <iostream>
#include <algorithm>
using namespace std;
int n, a[1001];

int main()
{
  cin >> n;
  for(int i=1;i<=n;++i)
  {
    cin >>a[i];
  }
  for(int i=1;i<=n;++i)
  {
    for(int j=1;j<=n;++j)
    {
      if(a[j] == i)
        cout << j << ' ';
    }
  }
  return 0;
}
