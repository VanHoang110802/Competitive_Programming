#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n,k,l,c,d,p,nl,np;
  cin >> n >> k >>l>>c>>d>>p>>nl >>np;
  int s1, s2, s3;
  s1 = (k *l)/nl;
  s2 = c *d;
  s3 = p / np;
  int MIN = min({s1,s2,s3});
  cout << MIN/n;
  return 0;
}
