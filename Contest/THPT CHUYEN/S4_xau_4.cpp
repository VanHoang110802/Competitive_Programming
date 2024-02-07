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
    int cnt = 0;
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            cnt++;
        }
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
