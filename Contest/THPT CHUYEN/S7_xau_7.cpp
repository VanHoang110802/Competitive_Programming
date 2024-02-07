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
    getline(cin, s);
}

void GiaiBai()
{
    stringstream ss(s);
    string temp;
    int cnt = 0;
    while(ss >> temp)
    {
        cnt++;
    }
    cout << cnt;
}

int main()
{
    XuLyNhanh();
    Nhap();
    GiaiBai();
    return 0;
}
