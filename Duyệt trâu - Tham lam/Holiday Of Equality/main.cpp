#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n,x, MAX = -1, sum = 0;
  cin >> n;
  for(int i=0;i<n;++i)
  {
    cin >> x;
    MAX = max(MAX,x);
    sum += x;
  }
  cout << (n * MAX) - sum;
  return 0;
}
