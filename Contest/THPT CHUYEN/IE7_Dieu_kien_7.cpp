//cong thuc nay co tren wikipedia
//en.wikipedia.org/wiki/Determination_of_the_day_of_the_week
//o phan Schwerdtfeger's method, Sakamoto's methods

#include<bits/stdc++.h>
using namespace std;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    vector <long long> a;
   for(int i=0;i<5;++i)
   {
       long long x; cin >> x;
       a.push_back(x);
   }
   sort(a.begin(), a.end());
   long long t = a[0];
   int cnt = 1;
   for(int i=1;i<5;++i)
   {
       if(a[i] == t) cnt++;
   }
   if(cnt < 4) cout << "NO";
   else cout << "YES";
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
