// http://thptchuyen.ntucoder.net/Problem/Details/4474

#include<bits/stdc++.h>
using namespace std;

long long n;

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

void Nhap()
{
    cin >> n;
}

void GiaiBai()
{
    long long s = n*(n+1) / 2;
    cout << s;
}

int main()
{
    XuLyNhanh();
    //File();
    Nhap();
    GiaiBai();
    return 0;
}
