/*
#include <bits/stdc++.h>
using namespace std;

stack <int> st;

void DieuKien_1()
{
    int x; cin >> x;
    st.push(x);
}

void DieuKien_2()
{
    if(!st.empty())
    {
        cout << st.top() << '\n';
        st.pop();
    }
    else cout << -1 << '\n';
}

void DieuKien_3()
{
    if(!st.empty())
    {
        cout << st.top() << '\n';
    }
    else cout << -1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while(test--)
    {
        int x; cin >> x;
        if(x == 1) DieuKien_1();
        if(x == 2) DieuKien_2();
        if(x == 3) DieuKien_3();
    }
    while(!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
    return 0;
}
*/

