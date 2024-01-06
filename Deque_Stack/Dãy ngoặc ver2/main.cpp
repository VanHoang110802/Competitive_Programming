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
    bool check = true;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty() || (s[i] == ')' && st.top() != '('))
            {
                check = false;
            }
            else if(st.empty() || (s[i] == ']' && st.top() != '['))
            {
                check = false;
            }
            else if(st.empty() || (s[i] == '}' && st.top() != '{'))
            {
                check = false;
            }
            if(check)
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else
                {
                    check = false;
                }
            }
        }
        if(check == false) break;
    }
    if(st.empty() && check) cout << "YES";
    else cout << "NO";
    return 0;
}
