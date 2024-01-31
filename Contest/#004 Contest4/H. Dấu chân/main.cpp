#include <bits/stdc++.h>
using namespace std;

const int MAXN = 50005;
string s;
int F[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> s;
    F[0] = 0; /// cai nay hinh nhu la qhd hay sao ay :vv
    for(int i = 1; i <= s.size() - 1; ++i)
    {
        if(s[i]== '(' && s[i - 1] == '(')
        {
            F[i] = F[i - 1] + 1;
        }
        else
        {
            F[i] = F[i - 1];
        }
    }
    int ans = 0;
    for(int i = 1; i <= s.size() - 1; ++i)
    {
        if(s[i]== ')' && s[i - 1] == ')')
        {
            ans += F[i];
        }
    }
    cout << ans;
    return 0;
}
