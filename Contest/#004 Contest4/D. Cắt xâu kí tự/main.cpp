#include <bits/stdc++.h>
using namespace std;

bool CheckDoiXung(string s, int x, int n)
{
    for(int i = 0; i <= n; ++i)
    {
        if(s[x + i] != s[x + n - 1 - i])
        {
            return false;
        }
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    s += s;
    for(int i = 1; i <= n; ++i)
    {
        if(CheckDoiXung(s, i, n))
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
 
