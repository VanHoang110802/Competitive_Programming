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
    vector <int> a;
    for(int i=0;i<n; ++i)
    {
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for(auto i:a) cout << i << ' ';
}

int main()
{
    XuLyNhanh();
    //File();
    GiaiBai();
    return 0;
}
