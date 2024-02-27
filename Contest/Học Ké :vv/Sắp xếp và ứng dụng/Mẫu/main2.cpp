#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
#define fi first
#define se second
const int MAXN = 1e6 + 7;
struct Diem
{
    int x, y;
};
Diem a[MAXN];
int n;

bool cmp(const Diem &d1, const Diem &d2)
{
    return ((d1.x < d2.x) || (d1.x == d2.x && d1.y > d2.y));
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i].x >> a[i].y;
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; ++i) cout << a[i].x << ' ' << a[i].y << '\n';
    return 0;
}
