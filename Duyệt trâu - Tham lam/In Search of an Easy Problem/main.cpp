#include <iostream>
using namespace std;
long long n, a[1001], cnt = 0;
int main()
{
  cin >> n;
  for(int i=0;i<n;++i)
  {
    cin >> a[i];
  }
  for(int i=0;i<n;++i)
  {
    if(a[i] == 1)
    {
      cnt++;
    }
  }
  if(cnt > 0) cout << "HARD";
  else cout << "EASY";
  return 0;
}
