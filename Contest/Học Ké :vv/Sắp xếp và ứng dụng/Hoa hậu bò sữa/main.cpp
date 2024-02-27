#include <iostream>
using namespace std;

#define int long long
#define fi first
#define se second
const int MAXN = 1e6 + 7;
int a[MAXN], b[MAXN], c[MAXN], f[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
        cin >> f[i];
        if(f[i] == 1) a[i]++;
        else if(f[i] == 2) b[i]++;
        else c[i]++;

        a[i] = a[i - 1] + a[i];
        b[i] = b[i - 1] + b[i];
        c[i] = c[i - 1] + c[i];
    }
    while(m--)
    {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << ' ' << b[r] - b[l - 1] << ' ' << c[r] - c[l - 1] << '\n';
    }
    return 0;
}
