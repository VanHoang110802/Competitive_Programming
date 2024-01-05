#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
string s, temp = "";
int main()
{
  getline(cin,s);
  int len = s.length();
  int cnt=0;
  for(int i=0;i<len;++i)
  {
     if(s[i] >= 'a' && s[i] <='z')
     {
        temp += s[i];
     }
  } 
  sort(temp.begin(), temp.end());
  for(int i=0;i<temp.size();++i)
  {
      if(temp[i] != temp[i+1])
      {
         cnt++;
      }
  }
  cout << cnt;
  return 0;
}
