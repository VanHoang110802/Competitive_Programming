#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+5;
int n, k, c, x;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    int nmax = -1, mmax = -1;
    for(int i = 1; i <= n; ++i)
    {
        cin >> c >> x;
        a[x] = c;
        if(nmax < x)
        {
            nmax = x;
        }
    }
    int s = 0;
    for(int i = 0; i <= 2 * k; ++i)
    {
        s += a[i];
    }
    mmax = s;
    for(int i = 2 * k + 1; i <= nmax; ++i)
    {
        s = s + a[i] - a[i - (2 * k + 1)];
        if(s > mmax) mmax = s;
    }
    cout << mmax;
    return 0;
}
