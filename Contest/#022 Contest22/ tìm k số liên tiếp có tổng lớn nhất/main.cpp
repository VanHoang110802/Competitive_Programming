#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    int i = 1, j = 1, sum = 0, cnt = 0, MAX = -1e18, vitri = 0;
    while(i <= n && j <= n)
    {
        if(cnt < k)
        {
            sum += a[j];
            ++j;
            cnt++;
        }
        else if(cnt == k)
        {
            if(sum > MAX)
            {
                vitri = i;
                MAX = sum;
            }
            ++i; --j;
            sum = a[i];
            cnt = 1;
        }
    }
    cout << MAX << '\n';
    for(int i = 1; i <= k; ++i) cout << a[i + vitri - 1] << ' ';
    return 0;
}
