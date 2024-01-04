#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e4;
int a[MAXN];
int n, k, cnt = 0;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i < k; ++i)
    {
        if(a[i] > 0)
        {
            cnt++;
        }
    }

    for(int i = k; i <= n; ++i)
    {
        if(a[i] > 0)
        {
            if(a[i] == a[k])
            {
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}
