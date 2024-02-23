#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e3 + 7;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, MAX = 0; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i)
    {
        int l, r;
        for(l = i - 1; l >= 0; --l)
        {
            if(a[l] < a[i]) break;
        }
        for(r = i + 1; r <= n + 1; ++r)
        {
            if(a[r] < a[i]) break;
        }
        MAX = max(MAX, a[i] * (r - l - 1));
    }
    cout << MAX << '\n';
    return 0;
}
