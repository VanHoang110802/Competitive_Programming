#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
#define fi first
#define se second
const int MAXN = 1e6 + 7;
int a[MAXN], b[MAXN], c[MAXN];

bool cmp(int a, int b)
{
    int ans1 = a % 2, ans2 = b % 2;
    if(ans1 == 0 && ans2 == 1) return false;
    else if(ans1 == 1 && ans2 == 0) return true;
    if(ans1 == 0 && ans2 == 0) return (a > b);
    else if(ans1 == 1 && ans2 == 1) return (a < b);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1, cmp);
    while(m--)
    {
        int l, r;
        cin >> l >> r;
        int vang = 0, bac = 0, dong = 0;
        for(int i = l; i <= r; ++i)
        {
            if(a[i] == 1) vang++;
            else if(a[i] == 2) bac++;
            else if(a[i] == 3) dong++;
        }
        cout << vang << ' ' << bac << ' ' << dong << '\n';
    }
    return 0;
}
