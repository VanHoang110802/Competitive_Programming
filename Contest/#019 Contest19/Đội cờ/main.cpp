/*
4
7 8
5 6
4 3
9 4
5

*/

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e5;
int n, ans = 0;
int a[MAXN], b[MAXN], dcda[MAXN], dcdb[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i] >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    for(int i = 1; i <= n; ++i)
    {
        if(dcdb[i] == 0)
        {
            for(int j = n; j >= 1; --j)
            {
                if(dcda[j] == 0 && a[j] < b[i])
                {
                    ans += 2;
                    dcdb[i] = 1;
                    dcda[j] = dcdb[i];
                    break;
                }
            }
        }
    }

    for(int i = 1; i <= n; ++i)
    {
        if(dcdb[i] == 0)
        {
            for(int j = 1; j <= n; ++j)
            {
                if(dcda[j] == 0 && a[j] == b[i])
                {
                    ans += 1;
                    dcdb[i] = 1;
                    dcda[j] = dcdb[i];
                    break;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
