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

void GiaiBai()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        map <char, int> MAP;
        for(int i=0;i<s.size();++i)
        {
            if(s[i] != ' ' && (s[i] >= 'a' && s[i] <= 'z')) MAP[s[i]]++;
        }
        int x = MAP.size();
        if(x == 26) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    XuLyNhanh();
    File();
    GiaiBai();
    return 0;
}
