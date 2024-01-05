#include <iostream>
#include <iomanip>
using namespace std;
int n;
double a[1005];
double sum=0;
int main()
{
  cin >> n;
  for(int i=0;i<n;++i)
  {
    cin >> a[i];
    sum += a[i];
  }
  double ans = sum/n;
  cout << setprecision(12) << fixed << ans;
  return 0;
}
