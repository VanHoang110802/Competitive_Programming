#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("NTLBai1.inp", "r", stdin);
    freopen("NTLBai1.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    ostringstream oss;
    oss << n;
    string s = oss.str();
    cout << s.size() << '\n';
    int MAX = 0;
    int vt = 0;
    for(int i=0;i<s.size();++i)
    {
        MAX = max(MAX, s[i] - '0');
    }
    for(int i=0;i<s.size();++i)
    {
        if((s[i] - '0') == MAX)
        {
            vt = i;
            break;
        }
    }
    cout << MAX << ' ' << vt + 1;
    return 0;
}
