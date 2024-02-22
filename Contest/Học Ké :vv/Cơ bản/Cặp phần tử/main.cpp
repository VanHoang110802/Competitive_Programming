#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], cnt[2007];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, s, ans = 0; cin >> n >> s;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if(s - a[i] > 0 && cnt[s - a[i]] > 0) ans += cnt[s - a[i]];
        cnt[a[i]]++;
    }
    cout << ans << '\n';
    return 0;
}
