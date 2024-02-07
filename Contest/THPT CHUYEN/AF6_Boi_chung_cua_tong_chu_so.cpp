#include<bits/stdc++.h>
using namespace std;
string s;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

template <typename vanhoang>
vanhoang GCD(vanhoang a, vanhoang b)
{
    if (b == 0) return a;
    return GCD(b, a % b);
}

template <typename vanhoang>
vanhoang LCM(vanhoang a, vanhoang b)
{
    return a / GCD(a, b) * b;
}

void GiaiBai()
{
   getline(cin, s);
   stringstream ss(s);
   string temp;
   vector <long long> a;
   while(ss >> temp)
   {
       long long cs = 0;
       for(int i=0;i<temp.size();++i)
       {
           cs += (temp[i]-'0');
       }
       a.push_back(cs);
   }
   cout << LCM(a[0], a[1]);
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
