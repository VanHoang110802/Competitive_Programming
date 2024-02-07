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

bool KTCP(int a)
{
    int c = (int)(sqrt(a));
    if(c*c==a) return true;
    return false;
}

void GiaiBai()
{
    cin >> n;
    int cnt = 0;
    for(int i=0;i<n;++i)
    {
        int k; cin >> k;
        if(KTCP(k)) cnt++;
    }
    cout << cnt;
}

int main()
{
    XuLyNhanh();
    //File();
    GiaiBai();
    return 0;
}
