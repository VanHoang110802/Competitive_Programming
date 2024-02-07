//http://thptchuyen.ntucoder.net/Problem/Details/7054

#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

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
    for(int i=0; i<n; ++i)
    {
        int x; cin >> x;
        a.push_back(x);
    }
}

bool CMP(const int &a, const int &b)
{
    if(a > b) return true;
    return false;
}

void GiaiBai()
{
    sort(a.begin(), a.end(), CMP);
    for(int i=0; i<a.size(); ++i)
    {
        cout << a[i] << ' ';
    }
}

int main()
{
    XuLyNhanh();
    //File();
    Nhap();
    GiaiBai();
    return 0;
}
