#include<bits/stdc++.h>
using namespace std;
string s1, s2;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> s1 >> s2;
    set<char> SET1;
    set<char> SET2;
    for(int i=0;i<s1.size(); ++i) SET1.insert(s1[i]);
    for(int i=0;i<s2.size(); ++i) SET2.insert(s2[i]);
    bool checkTrung = false;
    for(auto i: SET1)
    {
        for(auto j:SET2)
        {
            if(i == j)
            {
                checkTrung = true;
                cout << i << ' ';
            }
        }
    }
    if(checkTrung == false) cout << -1;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
