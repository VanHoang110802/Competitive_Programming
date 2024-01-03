#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string s1, s2 = "";
int main()
{
  cin >> s1;
  sort(s1.begin(), s1.end());
  int n = s1.length();
  for(int i=0;i<n;++i)
  {
    if(s1[i] != s1[i+1])
    {
      s2 += s1[i];
    }
  }
  int len = s2.length();
  if(len%2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
  return 0;
}
