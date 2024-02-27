#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
#define fi first
#define se second
const int MAXN = 1e5 + 7;
struct Cuahang
{
    int so_luong, gia, id;
};
Cuahang a[MAXN];
int x[MAXN];

bool cmp(const Cuahang &x, const Cuahang &y)
{
    return (x.gia < y.gia);
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> m >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i].so_luong >> a[i].gia;
        a[i].id = i;
    }
    sort(a + 1, a + n + 1, cmp);
    int cnt = 0, res = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(cnt + a[i].so_luong > m)
        {
            res += a[i].gia * (m - cnt);
            x[a[i].id] = m - cnt;
            break;
        }
        res += a[i].gia * a[i].so_luong;
        cnt += a[i].so_luong;
        x[a[i].id] = a[i].so_luong;
    }
    cout << res << '\n';
    for(int i = 1; i <= n; ++i)
    {
        cout << x[i] << '\n';
    }
    return 0;
}
