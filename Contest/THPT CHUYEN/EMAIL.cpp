#include<bits/stdc++.h>
using namespace std;
int t;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
   cin >> t;
   while(t--)
   {
       string s;
       cin >> s;
       int found = s.find("@");
       for(int i=1;i<found-1;++i)
       {
           s[i] = '*';
       }
       cout << s << '\n';
   }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
