#include <iostream>
using namespace std;
int n, q, p, cnt = 0;
int main()
{
  cin >> n;
  for(int i=0;i<n;++i)
  {
    cin >> p >> q;
    if(p < q-1) cnt++;
  }
  cout << cnt;
  return 0;
}
