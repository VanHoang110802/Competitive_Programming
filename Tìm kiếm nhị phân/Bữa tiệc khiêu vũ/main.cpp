#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int a1[MAXN], a2[MAXN], b1[MAXN], b2[MAXN];
int n, na1, na2, nb1, nb2, ans;

int GhepCap(int a[], int b, int c[], int d)
{
    sort(a + 1, a + b + 1);
    sort(c + 1, c + d + 1);
    int p = 1, dem = 0;
    for(int i = 1; i <= b; ++i)
    {
        int k = upper_bound(c + p, c + d + 1, a[i]) - c;
        if(k <= b) dem++;
    }
    return dem;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int x; cin >> x;
        if(x > 0) a1[++na1] = x;
        else a2[++na2] = abs(x);
    }
    for(int i = 1; i <= n; ++i)
    {
        int x; cin >> x;
        if(x > 0) b1[++nb1] = x;
        else b2[++nb2] = abs(x);
    }
    ans = ans + GhepCap(a1, na1, b2, nb2) + GhepCap(b1, nb1, a2, na2);
    cout << ans << '\n';
    return 0;
}
