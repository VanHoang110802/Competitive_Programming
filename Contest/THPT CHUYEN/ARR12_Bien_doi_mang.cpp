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
    getline(cin, s);
    stringstream ss(s);
    string temp;
    int cnt = 0;
    while (ss >> temp)
    {
        if(temp == "2004")
        {
            cnt++;
            break;
        }
    }
    if(cnt == 0) cout << -1;
    else cout << 2004;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}

