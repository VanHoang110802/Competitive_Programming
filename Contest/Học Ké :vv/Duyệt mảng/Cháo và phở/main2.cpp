#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

#define int long long
#define fi first
#define se second
const int MAXN = 1e6 + 7;
struct Khach
{
    int l, r, mon_an;
    Khach(){};
    Khach(int _l, int _r, int _mon_an)
    {
        l = _l;
        r = _r;
        mon_an = _mon_an;
    }
};
Khach a[MAXN];
int so_thia, so_dua, n;
int kq[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> so_thia >> so_dua >> n;
    for(int i = 1; i <= n; ++i)
    {
        int t, d, k; cin >> t >> d >> k;
        a[i] = Khach(t, t + d, k);
    }
    memset(kq, 0, sizeof(kq));
    priority_queue<int, vector<int>, greater<int> > pq[2];
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            while(!pq[j].empty() && pq[j].top() <= a[i].l)
            {
                so_thia++;
                if(j == 1) so_dua++;
                pq[j].pop();
            }
        }
        if(a[i].mon_an == 0 && so_thia > 0)
        {
            so_thia--;
            pq[0].push(a[i].r);
            kq[i] = 1;
            continue;
        }
        if(a[i].mon_an == 1 && so_thia > 0 && so_dua > 0)
        {
            so_dua--;
            so_thia--;
            pq[1].push(a[i].r);
            kq[i] = 1;
            continue;
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        if(kq[i] == 1) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
