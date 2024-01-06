#include <iostream>
#include <deque>
#include <string>
using namespace std;

string s;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s;

    deque<char> s1;
    deque<char> s2;

    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == '<')
        {
            if(!s1.empty())
            {
                char x = s1.back();
                s1.pop_back();
                s2.push_front(x);
            }
        }
        else if(s[i] == '>')
        {
            if(!s2.empty())
            {
                char x = s2.front();
                s2.pop_front();
                s1.push_back(x);
            }
        }
        else if(s[i] == '-')
        {
            if(!s1.empty())
            {
                s1.pop_back();
            }
        }
        else
        {
            s1.push_back(s[i]);
        }
    }

    string ans;
    for(char c: s1) ans.push_back(c);
    for(char c: s2) ans.push_back(c);
    cout << ans << endl;
    return 0;
}
