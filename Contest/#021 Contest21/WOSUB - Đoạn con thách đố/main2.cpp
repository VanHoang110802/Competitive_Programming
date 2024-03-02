#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 1e6 + 7;

int prefix[MAXN], n, s;

signed main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    int j = 0, res = -1;
    for(int i = 1; i <= n; ++i)
    {
        cin >> prefix[i];
        prefix[i] += prefix[i - 1];
    }
    cin >> s;
    for(int i = 1; i <= n; ++i)
    {
        while(prefix[i] - prefix[j] > s) j++;
        if((prefix[i] - prefix[j]) == s)
        {
            res = max(res,i-j);
            j++;
        }
    }
    cout << res;
    return 0;
}
