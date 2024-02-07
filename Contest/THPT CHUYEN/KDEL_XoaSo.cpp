#include <bits/stdc++.h>
using namespace std;

stack<char> st;
int k;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> s >> k;
    vector <char> ans;
    ans.push_back(s[0]);
    for(int i=1; i<s.size(); ++i)
    {
        while(k && s[i] > ans.back() && ans.size())
        {
            k--;
            ans.pop_back();
        }
        ans.push_back(s[i]);
    }
    while(k)
    {
        ans.pop_back();
        k--;
    }
    for(int i=0; i<ans.size(); ++i)
    {
        cout << ans[i];
    }
    return 0;
}
