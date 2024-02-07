//http://thptchuyen.ntucoder.net/Problem/Details/4472

#include<bits/stdc++.h>
using namespace std;

int n;

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
    cout << n * 3;
}

int main()
{
    XuLyNhanh();
    //File();
    Nhap();
    GiaiBai();
    return 0;
}
