#include <iostream>
#include <string>
using namespace std;
int n;
int main()
{
  string s1 = "I hate", s2 = "I love", s3 ="I hate it";
  cin >> n;
  if(n <= 1)
  {
    cout << s3;
    return 0;
  }
  else
  {
    s3 ="I hate";
    for(int i =2;i<=n;++i)
    {
      if(i%2 == 0)
        s3 += " that " + s2;
      else
        s3 += " that " + s1;
    }
  }
  cout << s3 + " it";
  return 0;
}
