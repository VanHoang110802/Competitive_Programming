#include <iostream>
using namespace std;
int a, b, c, cnt = 0;
int main()
{
  cin >> a >> b;
  for(int i=1;i<=a;++i)
  {
    cin >> c;
    if(c <= 5 - b) cnt++;
  }
  cout << cnt/3;
  return 0;
}
