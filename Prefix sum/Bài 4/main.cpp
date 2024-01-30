#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

const int MAXN = 1e6 + 7;
int test;
int prefix[MAXN], temp_prefix[MAXN], tg[MAXN];

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        int n, p, q; cin >> n >> p >> q;
        while(q--)
        {
            int l, r, x;
            cin >> l >> r >> x;
            tg[l] += x;
            tg[r + 1] -= x;
        }
        for(int i = 1; i <= n; ++i)
        {
            temp_prefix[i] = temp_prefix[i - 1] + tg[i];
            prefix[i] = prefix[i - 1] + temp_prefix[i];
        }
        for(int i = 1; i <= n; ++i) cout << temp_prefix[i] << ' ';
        cout << '\n';
        while(p--)
        {
            int a, b; cin >> a >> b;
            cout << prefix[b] - prefix[a - 1] << '\n';
        }
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
