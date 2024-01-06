#include <iostream>
#include <string>
using namespace std;

#define int long long
int test;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test;
    while(test--)
    {
        int cnt = 0;
        string templt = "codeforces";
        string s; cin >> s;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] != templt[i])
            {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
