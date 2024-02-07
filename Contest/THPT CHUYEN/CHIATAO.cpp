//cong thuc nay co tren wikipedia
//en.wikipedia.org/wiki/Determination_of_the_day_of_the_week
//o phan Schwerdtfeger's method, Sakamoto's methods

#include<bits/stdc++.h>
using namespace std;

long long n;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    int tong = 0;
    for(int i=0;i<n;++i)
    {
        int x; cin >> x;
        tong += x;
    }
    if(tong % 200) cout << "NO";
    else cout << "YES";
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
