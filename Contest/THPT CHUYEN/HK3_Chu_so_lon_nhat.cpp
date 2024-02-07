#include<bits/stdc++.h>
using namespace std;
string s;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

bool CMP(const char &a, const char &b)
{
    if(a > b) return true;
    return false;
}

void GiaiBai()
{
    cin >> s;
    sort(s.begin(), s.end(), CMP);
    cout << s[0];
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
