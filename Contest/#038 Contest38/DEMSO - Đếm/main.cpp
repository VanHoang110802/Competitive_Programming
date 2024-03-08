#include <iostream>
#include <string>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, cnt_duong = 0, cnt_am = 0; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        if(s[0] == '0') continue;
        else if(s[0] == '-') cnt_am++;
        else cnt_duong++;
    }
    cout << cnt_am << ' ' << cnt_duong << '\n';
    return 0;
}
