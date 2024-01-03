#include <iostream>
#include <string>
#include <map>
using namespace std;

#define int long long
int n;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    while(1)
    {
        n++;
        bool checkTrung = false;
        string s = to_string(n);
        map <char, int> MAP;

        for(int i = 0; i < s.length(); ++i)
        {
            MAP[s[i]]++;
        }
        for(auto x:MAP)
        {
            if(x.second >= 2)
            {
                checkTrung = true;
                break;
            }
        }
        if(checkTrung == false)
        {
            cout << s << '\n';
            break;
        }
    }
    return 0;
}
