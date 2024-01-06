#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

#define int long long
string s;
int n;
stack <int> st;
vector <int> v;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s >> n;
    int cnt = 0;
    st.push(s[0] - '0');
    for(int i = 1; i < s.size(); ++i)
    {
        int a = s[i] - '0';
        while(!st.empty() && cnt < n && st.top() < a)
        {
            st.pop();
            cnt++;
        }
        st.push(a);
    }
    while(cnt++ < n)
    {
        st.pop();
    }
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    for(int i = v.size() - 1; i >= 0; --i) cout << v[i];
    return 0;
}
