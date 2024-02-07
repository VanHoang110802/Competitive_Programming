// http://thptchuyen.ntucoder.net/Problem/Details/4476

#include<bits/stdc++.h>
using namespace std;

string s;
char x;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void Nhap()
{
    cin >> s >> x;
}

void GiaiBai()
{
    int n = s.size(), cnt = 0;
    for(int i=0; i<n; ++i) if(s[i] == x) cnt++;
    cout << cnt;
}

int main()
{
    XuLyNhanh();
    Nhap();
    GiaiBai();
    return 0;
}
