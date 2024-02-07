#include<bits/stdc++.h>
using namespace std;
int n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    map <char, int> MAP;
    for(int i=0;i<n;++i)
    {
        char x; cin >> x;
        MAP[x]++;
    }
    int MAX = 0;
    for(auto i:MAP)
    {
        cout << i.first << ' ' << i.second << '\n';
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}

