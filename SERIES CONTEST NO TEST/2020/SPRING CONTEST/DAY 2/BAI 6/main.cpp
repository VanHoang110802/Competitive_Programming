#include <iostream>
#include <iomanip>
#include <stack>
using namespace std;

void XuLy()
{
    string s;
    cin >> s;
    stack <int> st;
    for (int i = 0; i < (int) s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(-1);
        }
        else if (s[i] == 'C')
        {
            st.push(12);
        }
        else if (s[i] == 'H')
        {
            st.push(1);
        }
        else if (s[i] == 'O')
        {
            st.push(16);
        }
        else if (s[i] == ')')
        {
            int sum = 0;
            while (true)
            {
                int t = st.top();
                st.pop();
                if (t == -1)
                {
                    break;
                }
                sum += t;
            }
            st.push(sum);
        }
        else
        {
            int t = st.top();
            st.pop();
            t *= s[i] - '0';
            st.push(t);
        }
    }
    int res = 0;
    while (!st.empty())
    {
        int t = st.top();
        st.pop();
        res += t;
    }
    cout << res;
    cout << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    cin >> test;
    while(test--)
    {
        XuLy();
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
