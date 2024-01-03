#include <iostream>
using namespace std;
long long k,n,w,s=0;
int main()
{
  cin >> k >> n >> w;
  for(long long i=1;i<=w;++i)
  {
    s += (i*k);
  }
  long long ans = s-n;
  if(ans < 1) cout << 0;
  else cout << ans;
  return 0;
}
