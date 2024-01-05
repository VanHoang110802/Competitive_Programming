#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
int n;
string s;
int main()
{
  cin >> n;
  cin >> s;
  strlwr((char*)s.c_str());
  sort(s.begin(), s.end());
  int cnt = 0;
  for(int i=0;i<n;++i)
  {
    if(s[i] == s[i+1]) cnt++;
  }
  int ans = n - cnt;
  if(ans == 26) cout <<"YES";
  else cout << "NO";
  return 0;
}
