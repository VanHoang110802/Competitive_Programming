// http://thptchuyen.ntucoder.net/Problem/Details/4478

#include<bits/stdc++.h>
using namespace std;

int n;
string s;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n >> s;
    for(int i=0; i<s.size(); ++i)
    {
        s[i] -= n;
        if(s[i] < 97)
        {
            s[i] += 26;
        }
        cout << s[i];
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
