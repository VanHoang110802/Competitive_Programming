//http://thptchuyen.ntucoder.net/Problem/Details/4473

#include<bits/stdc++.h>
using namespace std;

long long a, b, c;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

//void File()
//{
//    if (fopen("name.INP", "r"))
//    {
//        freopen("name.INP", "r", stdin);
//        freopen("name.OUT",  "w", stdout);
//    }
//}

void GiaiBai()
{
    cin >> a >> b >> c;
    long long s = (a*(b+c))+ (b*(a+c));
    cout << s;
}

int main()
{
    XuLyNhanh();
    //File();
    GiaiBai();
    return 0;
}
