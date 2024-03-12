#include <iostream>
#include <cmath>
using namespace std;

#define int long long
int N, X, ans = 1;

signed main() 
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> N >> X;
  if (N == 1)
  {
    cout << X;
    return 0;
  }
  for (int i = 1; pow(i, N) <= X; i++)
  {
    if (X % (int)pow(i, N) == 0) ans = i;
  }
  cout << ans << '\n';
  return 0;
}
