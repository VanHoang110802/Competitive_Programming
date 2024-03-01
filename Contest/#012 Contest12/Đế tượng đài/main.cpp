#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int, int> pii;
typedef pair<int64_t, int> pli;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x, y;
    cin >> n;
    vector<pii> a(n + 2);
    vector<int64_t> f(n + 1);
    vector<int> lf(n + 1), rt(n + 1);
    f[0] = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin >> x >> y;
        a[i] = {x, i};
        f[i] = f[i - 1] + y;
    }
    a[0] = {0, 0};
    a[n + 1] = {0, n + 1};
    vector<pii> s(n + 1);
    int p = 0, q;
    s[p] = a[0];
    for(int i = 1; i <= n; ++i)
    {
        while(s[p].first >= a[i].first)--p;
        lf[i] = s[p].second;
        s[++p] = a[i];
    }
    p = 0;
    s[p] = a[n + 1];
    for(int i = n; i > 0; --i)
    {
        while(s[p].first >= a[i].first) --p;
        rt[i] = s[p].second;
        s[++p] = a[i];
    }
    int64_t ans = 0, area;
    for(int i = 1; i <= n; ++i)
    {
        p = lf[i];
        q = rt[i];
        area = (f[q - 1] - f[p]) * a[i].first;
        ans = max(ans, area);
    }
    cout << ans;
    return 0;
}
