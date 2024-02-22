#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e3 + 7;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, cnt = 0; cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; ++i)
    {
        for(int j = i + 1; j <= n; ++j)
        {
            if(a[i] == a[j]) cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}
