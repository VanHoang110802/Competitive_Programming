#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], b[MAXN], cnt_1[2 * MAXN], cnt_2[2 * MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        cnt_1[a[i] + MAXN]++;
    }
    for(int i = 1; i <= m; ++i)
    {
        cin >> b[i];
        cnt_2[b[i] + MAXN]++;
    }
    int giao = 0, hop = 0;
    for(int i = 0; i <= 2 * MAXN; ++i)
    {
        if(cnt_1[i] > 0 && cnt_2[i] > 0)
        {
            giao++;
        }
        if(cnt_1[i] > 0 || cnt_2[i] > 0)
        {
            hop++;
        }
    }
    cout << hop << ' ' << giao << '\n';
    return 0;
}
