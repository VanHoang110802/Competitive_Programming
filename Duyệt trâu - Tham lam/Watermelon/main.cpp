#include <iostream>
using namespace std;

#define int long long
int n;

signed main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> n;
  if(n < 3) 
  {
    cout << "NO";
    return 0;
  }
  if(n % 2 != 0)
  {
    cout << "NO";
  }
  else cout << "YES";
  return 0;
}
