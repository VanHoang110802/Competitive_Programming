#include <iostream>
#include <ctime>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
int a[MAXN], prefix[MAXN];

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
        int n, q; cin >> n;
        for(int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
        cin >> q;
        while(q--)
        {
            int l, r; cin >> l >> r;
            cout << prefix[r] - prefix[l - 1] << '\n';
        }
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
