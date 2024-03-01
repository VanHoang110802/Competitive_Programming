#include <iostream>
#include <string>
using namespace std;

int n, k, mn, mx, p, q;
string s, ans;
bool b[26] = {0};

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s >> k;
    for(int i = 0; i < n; ++i) b[s[i] - 97] = true;
    for(int i = 0; i < 26; ++i)
    {
        if(b[i])
        {
            mn = i;
            break;
        }
    }
    for(int i = 25; i >= 0; --i)
    {
        if(b[i])
        {
            mx = i;
            break;
        }
    }
    if(n < k)
    {
        ans = s;
        for(int i = 0; i < k - n; ++i) ans += (char)(97 + mn);
        cout << ans;
        return 0;
    }
    p = k - 1;
    while(p >= 0 && s[p] - 97 == mx) --p;
    for(int i=s[p]-96; i<26; ++i)
    {
        if(b[i])
        {
            q = i;
            break;
        }
    }
    ans = s.substr(0, p) + (char)(q+97);
    for(int i = p + 1; i < k; ++i) ans += (char)(97 + mn);
    cout << ans;
    return 0;
}
