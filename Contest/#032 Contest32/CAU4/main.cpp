#include<bits/stdc++.h>
using namespace std;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void File()
{
    if (fopen("BAI4.INP", "r"))
    {
        freopen("BAI4.INP", "r", stdin);
        freopen("BAI4.OUT",  "w", stdout);
    }
}

bool CheckChar(char x)
{
    set<char> SET={'a', 'e', 'i', 'o', 'u'};
    return SET.find(x) != SET.end();
}

void GiaiBai()
{
    int n, cnt = 0, MAX = -1; cin >> n;
    string s; cin >> s;
    for(int i=0;i<n;++i)
    {
        if(CheckChar(s[i]))
        {
            cnt++;
            if(cnt > MAX) MAX = cnt;
        }
        else cnt = 0;
    }
    cout << MAX;
}

int main()
{
    XuLyNhanh();
    File();
    GiaiBai();
    return 0;
}

