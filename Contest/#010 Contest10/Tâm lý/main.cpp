#include <iostream>
#include <string>
using namespace std;

int n, k, m, p;
string s;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> m;
    for(int j = 0; j < m; ++j)
    {
        cin >> s;
        s = '0' + s;
        n = s.size();
        p = n - 1;
        for(int i = 1; i < n; ++i)
        {
            if(s[i] == s[i - 1])
            {
                p = i;
                break;
            }
        }
        while(1)
        {
            if(s[p] < 56)
            {
                if(s[p - 1] != s[p] + 1) ++s[p];
                else s[p] += 2;
                break;
            }
            if(s[p] == 56 && s[p - 1] != 57)
            {
                ++s[p];
                break;
            }
            --p;
        }
        k = 0;
        for(int i = p + 1; i < n; ++i) s[i] = 48 + k, k ^= 1;
        if(s[0] == 48) s.erase(0, 1);
        cout << s << '\n';
    }
    return 0;
}
