#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k, m, maxa;
int64_t t, ans, sm, lf, rt, mid, p;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    vector<int> a(n + 1);
    sm = 0;
    maxa = 0;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sm += a[i];
        maxa = max(maxa, a[i]);
    }
    a[n] = sm;
    lf = maxa;
    rt = sm;
    while(rt - lf > 1)
    {
        mid = lf + (rt - lf) / 2;
        m = 0;
        p = 0;
        for(int i = 0; i <= n; ++i)
        {
            if(p + a[i] > mid)
            {
                p = a[i];
                ++m;
            }
            else p += a[i];
        }
        if(m > k) lf= mid;
        else rt = mid;
    }
    m = 0;
    p = 0;
    for(int i = 0; i <= n; ++i)
    {

        if(p + a[i] > lf)
        {
            p = a[i];
            ++m;
        }
        else p += a[i];
    }
    ans = (m <= k) ? lf : rt;
    cout << ans;
    return 0;
}
