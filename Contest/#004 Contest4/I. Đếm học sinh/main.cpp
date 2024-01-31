#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+5;
int n, q, a, b, x;
int mate[MAXN], femate[MAXN], gay[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> q;
    for(int i = 1; i <= n; ++i)
    {
        cin >> x;
        if(x == 1) mate[i] = mate[i - 1] + 1;
        else mate[i] = mate[i - 1];

        if(x == 2) femate[i] = femate[i - 1] + 1;
        else femate[i] = femate[i - 1];

        if(x == 3) gay[i] = gay[i - 1] + 1;
        else gay[i] = gay[i - 1];
    }
    for(int i = 1; i <= q; ++i)
    {
        cin >> a >> b;
        cout << mate[b] - mate[a - 1] << ' ' << femate[b] - femate[a - 1] << ' ' << gay[b] - gay[a - 1] << '\n';
    }
    return 0;
}
