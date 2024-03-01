#include <bits/stdc++.h>
using namespace std;

string s;
int n, k = 0;
vector<int> a;
int64_t ans;

signed main()
{
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    cin >> s;
    n = s.size();
    a.push_back(-1);
    for(int i = 0; i < n; ++i)
        if(s[i] == '(') ++k;
        else
        {
            --k;
            if(k == 0) a.push_back(i);
        }
    ans = (int64_t)(n + 1) * (n + 2) / 2;
    for(int i = 1; i < a.size(); ++i)
    {
        k = a[i] - a[i - 1];
        ans += (int64_t)(k) * (k - 1) / 2;
    }
    cout << ans;
    return 0;
}
