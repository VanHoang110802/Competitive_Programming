#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;
    stack <char> st_ngoac_tron, st_ngoac_vuong, st_ngoac_nhon;
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i] == '(') st_ngoac_tron.push(s[i]);
        else if(s[i] == '{') st_ngoac_nhon.push(s[i]);
        else if(s[i] == '[') st_ngoac_vuong.push(s[i]);

        if(!st_ngoac_tron.empty() && s[i] == ')') st_ngoac_tron.pop();
        else if(!st_ngoac_nhon.empty() && s[i] == '}') st_ngoac_nhon.pop();
        else if(!st_ngoac_vuong.empty() && s[i] == ']') st_ngoac_vuong.pop();
    }
    if(st_ngoac_tron.empty() && st_ngoac_nhon.empty() && st_ngoac_vuong.empty()) cout << "YES";
    else cout << "NO";
    return 0;
}
