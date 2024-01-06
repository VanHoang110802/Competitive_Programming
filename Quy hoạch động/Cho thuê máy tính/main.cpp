/*
https://www.spoj.com/problems/RENT/
*/
#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], b[MAXN], c[MAXN], F[MAXN];
int n;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i] >> b[i] >> c[i];

    for(int i = 1; i <= n - 1; ++i)
    {
        for(int j = i + 1; j <= n; ++j)
        {
           if(b[i] > b[j])
           {
                swap(b[i], b[j]);
                swap(a[i], a[j]);
                swap(c[i], c[j]);
            }
        }
    }
    F[1] = c[1];
    for(int i = 2; i <= n; ++i)
    {
        F[i] = c[i];
        for(int j = 1; j <= i - 1; ++j)
        {
            if(b[j] <= a[i])
            {
                F[i] = max(F[i], F[j] + c[i]);
            }
        }
    }
    int ans = -1;
    for(int i = 1; i <= n; ++i)
    {
        ans = max(F[i], ans);
    }
    cout << ans << '\n';
    return 0;
}
