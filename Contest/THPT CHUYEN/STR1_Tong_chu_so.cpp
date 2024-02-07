#include<bits/stdc++.h>
using namespace std;
string s;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> s;
    int tong = 0;
    for(int i=0;i<s.size();++i)
    {
        tong += s[i] - '0';
    }
    cout << tong;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
