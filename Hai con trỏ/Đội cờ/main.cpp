/*
4
7 8
5 6
4 3
9 4

4 3
5 4
7 6
9 8

3 4 = 0
4 4 = 1
6 5 = 2
8 7 = 2
i = 4
j = 5
*/
#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int a[MAXN], b[MAXN], dda[MAXN], ddb[MAXN];
int n, ans;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i] >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    for(int i = 1; i <= n; ++i)
    {
        if(ddb[i] == 0)
        {
            for(int j = n; j > 0; --j)
            {
                if(dda[j] == 0 && a[j] < b[i])
                {
                    ans += 2;
                    ddb[i] = 1;
                    dda[j] = ddb[i];
                    break;
                }
            }
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        if(ddb[i] == 0)
        {
            for(int j = 1; j <= n; ++j)
            {
                if(dda[j] == 0 && a[j] == b[i])
                {
                    ans++;
                    ddb[i] = 1;
                    dda[j] = ddb[i];
                    break;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
