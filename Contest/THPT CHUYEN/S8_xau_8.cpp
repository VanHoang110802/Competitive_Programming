// http://thptchuyen.ntucoder.net/Problem/Details/4478

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
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z') cout << s[i];
    }
}

int main()
{
    XuLyNhanh();
    Nhap();
    GiaiBai();
    return 0;
}
