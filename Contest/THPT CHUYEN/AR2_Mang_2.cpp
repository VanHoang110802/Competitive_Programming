// http://thptchuyen.ntucoder.net/Problem/Details/4478

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

void GiaiBai()
{
    cin >> n;
    int MAX = -101;
    for(int i=0;i<n;++i)
    {
        int x; cin >> x;
        if(x > MAX) MAX = x;
    }
    cout << MAX;
}

int main()
{
    XuLyNhanh();
    //File();
    GiaiBai();
    return 0;
}
