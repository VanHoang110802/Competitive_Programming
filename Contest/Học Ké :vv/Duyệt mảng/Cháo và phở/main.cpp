#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], t[MAXN], d[MAXN], x[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    for(int i = 1; i <= k; ++i) cin >> t[i] >> d[i] >> a[i];
    cout << "Yes\n";
    n--;
    if(a[1]) m--;
    for(int i = 2; i <= k; ++i)
    {
        for(int j = 1; j < i; ++j)
        {
            if(x[j] == 0 && t[j] + d[j] <= t[i])
            {
                x[j] = 1;
                n++;
                if(a[j]) m++;
            }
        }
        if(n == 0)
        {
            cout << "No\n";
            x[i] = 1;
        }
        else
        {
            if(a[i] == 0)
            {
                cout << "Yes\n";
                n--;
            }
            else
            {
                if(m == 0)
                {
                    cout << "No\n";
                    x[i] = 1;
                }
                else
                {
                    cout << "Yes\n";
                    m--;
                    --n;
                }
            }
        }
    }
    return 0;
}
/*
1 1 4
1 6 1
5 1 0
10 9 1
11 10 0
*/
