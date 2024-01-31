#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

#define int long long
#define fi first
#define se second
const int MAXN = 1e6 + 7;
int a[MAXN];
int test;

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
        int n; cin >> n;
        int MAX = 0;
        for(int i = 0; i < n; ++i)
        {
            int x; cin >> x;
            a[x]++;
            MAX = max(MAX, a[x]);
        }
        cout << MAX;
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
