#include <iostream>
#include <map>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], cnt[MAXN];

signed main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n; cin >> n;
  for(int i = 1; i <= n; ++i)
  {
    cin >> a[i];
    cnt[a[i] + MAXN]++;
  }
  int d = 0;
  for(int i = 0; i <= 2 * MAXN; ++i)
  {
    if(cnt[i] > 0) d++;
  }
  cout << d << '\n';
  for(int i = 0; i <= 2 * MAXN; ++i)
  {
    if(cnt[i] > 0) cout << i - MAXN << ' ' << cnt[i] << '\n';
  }
  return 0;
}
