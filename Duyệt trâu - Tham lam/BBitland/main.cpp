#include <iostream>
#include <string>
using namespace std;

#define int long long
string s;
int n, x = 0;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(s[0] == '+' && s[1] == '+') x++;
        else if(s[0] == '-' && s[1] == '-') x--;
        else if(s[1] == '+' && s[2] == '+') x++;
        else if(s[1] == '-' && s[2] == '-') x--;
    }
    cout << x << '\n';
    return 0;
}
