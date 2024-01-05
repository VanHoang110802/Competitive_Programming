#include <iostream>
using namespace std;
int n, h, temp = 0;
int main()
{
  cin >> n >> h;
  int a;
  temp = n;
  while(n--)
  {
    cin >> a;
    if(a > h) temp++;
  }
  cout << temp;
  return 0;
}
