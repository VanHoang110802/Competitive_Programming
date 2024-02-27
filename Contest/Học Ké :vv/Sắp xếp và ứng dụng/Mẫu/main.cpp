#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
#define fi first
#define se second
const int MAXN = 1e6 + 7;
int a[MAXN];

bool cmp(const int &x, const int &y)
{
    return (x > y);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; ++i) cout << a[i] << ' ';
    return 0;
}
