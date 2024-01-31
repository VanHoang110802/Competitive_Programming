#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+5;
int n, k, x;
int a[MAXN], dem[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    int maxX = -1;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= k + 1; ++i)
    {
        dem[a[i]]++;
        if(dem[a[i]] > 1)
        {
            if(a[i] > maxX)
            {
                maxX = a[i];
            }
        }
    }
    for(int i = 2; i <= n - k; ++i)
    {
        dem[a[i + k]]++;
        dem[a[i-1]]--;
        if(dem[a[i + k]] > 1)
        {
            if(a[i + k] > maxX)
            {
                maxX = a[i + k];
            }
        }
    }
    cout << maxX;
    return 0;
}
 
