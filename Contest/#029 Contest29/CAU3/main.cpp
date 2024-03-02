#include<bits/stdc++.h>
using namespace std;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void File()
{
    if (fopen("BAI3.INP", "r"))
    {
        freopen("BAI3.INP", "r", stdin);
        freopen("BAI3.OUT",  "w", stdout);
    }
}

void GiaiBai()
{
    string s; cin >> s;
    long long cntNguoc = 0, cntXuoi = 0;
    for (long long i= s.length()-1; i>=0; --i)
    {
        if (s[i]!='0') break;
        else cntNguoc++;
    }
    for (long long i= 0; i<s.length()-cntNguoc; ++i)
    {
        if (s[i]=='0') cntXuoi++;
    }
    cout << cntXuoi;
}

int main()
{
    XuLyNhanh();
    File();
    GiaiBai();
    return 0;
}
