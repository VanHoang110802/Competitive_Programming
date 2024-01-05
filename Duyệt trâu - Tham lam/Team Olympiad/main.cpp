#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n+2];
  vector <int> x,y,z;
  for(int i=1;i<=n;++i)
  {
    cin >> a[i];
    if(a[i] == 1)
    {
      x.push_back(i);
    }
    else if(a[i] == 2)
    {
      y.push_back(i);
    }
    else if(a[i] == 3)
    {
      z.push_back(i);
    }
  }
  int ans = min(x.size(), min(y.size(), z.size()));
  cout << ans << '\n';
  for(int i=0;i<ans;++i)
  {
    cout << x[i] << ' ' << y[i] << ' ' << z[i] << '\n';
  }
  return 0;
}
