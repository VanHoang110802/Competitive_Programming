#include <iostream>
#include <string>
#include <stack>
using namespace std;

#define int long long
string s;
stack <char> st;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
        }
        if(s[i] == ')' && !st.empty())
        {
            st.pop();
        }
    }
    if(st.empty()) cout << "YES";
    else cout << "NO";
    return 0;
}
