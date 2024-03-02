#include <iostream>
#include <stack>
using namespace std;

#define int long long
int n, k;
stack <int> st;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    while(n)
    {
        st.push(n % k);
        n /= k;
    }
    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}
