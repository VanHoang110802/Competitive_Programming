#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 1e3 + 7;
int a[MAXN], b[MAXN], temp[MAXN], res[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, MIN = 1e9; cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    memset(res, 0, sizeof(res));

    for(int i = 1; i <= 1000; ++i)
    {
        b[1] = i;
        for(int j = 2; j <= n; ++j)
        {
            b[j] =  b[j - 1] + k;
        }
        int cnt = 0;
        memset(temp, 0, sizeof(temp));

        for(int j = 1; j <= n; ++j)
        {
            if(b[j] != a[j])
            {
                cnt++;
                temp[j] = b[j] - a[j];
            }
        }
        if(cnt < MIN)
        {
            MIN = cnt;
            for(int j = 1; j <= n; ++j)
            {
                res[j] = temp[j];
            }
        }
    }
    cout << MIN << '\n';
    for(int i = 1; i <= n; ++i)
    {
        if(res[i] < 0)
        {
            cout << "- " << i << ' ' << -res[i] << '\n';
        }
        else if(res[i] > 0)
        {
            cout << "+ " << i << ' ' << res[i] << '\n';
        }
    }
    return 0;
}
