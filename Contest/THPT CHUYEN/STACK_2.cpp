#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;
    stack <char> st;
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i] == '(') st.push(s[i]);
        if(!st.empty() && s[i] == ')') st.pop();
    }
    if(!st.empty()) cout << "NO";
    else cout << "YES";
    return 0;
}
