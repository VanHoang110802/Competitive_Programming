#include <iostream>
#include <string>
using namespace std;

#define int long long
string s = "Timur";
int t;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        int n;
        string s1;
        cin >> n >> s1;
        if(n != 5)
        {
            cout << "NO\n";
            continue;
        }
        bool ok = true;
        for(int i = 0; i < 5; ++i)
        {
            int temp = 0;
            for(int j = 0; j < s1.size(); j++)
            {
                if(s[i] == s1[j])
                {
                    temp++;
                }
            }
            if(temp != 1)
            {
                cout << "No\n";
                ok = false;
                break;
            }
        }
        if(ok)
        {
            cout << "Yes\n";
        }
    }
    return 0;
}
