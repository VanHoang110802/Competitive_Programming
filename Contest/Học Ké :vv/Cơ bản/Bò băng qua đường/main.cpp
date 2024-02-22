#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int cnt[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    fill(cnt, cnt + MAXN + 1, -1);
    int n, ans = 0; cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int id, p; cin >> id >> p;
        if(cnt[id] != -1 && cnt[id] != p)
        {
            ans++;
        }
        cnt[id] = p;
    }
    cout << ans << '\n';
    return 0;
}
