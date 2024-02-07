// http://thptchuyen.ntucoder.net/Problem/Details/4475

#include<bits/stdc++.h>
using namespace std;

string s;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void Nhap()
{
    cin >> s;
}

void GiaiBai()
{
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;
}

int main()
{
    XuLyNhanh();
    Nhap();
    GiaiBai();
    return 0;
}
