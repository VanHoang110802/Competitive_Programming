#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
#define fi first
#define se second

const int MAXN = 5 * 1e5 + 10;
int a[MAXN], b[MAXN];


int n, m, k;
int res, cnt, ans;
string s, t;


void solution()
{
    cin >> n >> m >> k;
    for( int i = 1; i <= n; i++ )
    {
        cin >> a[i];
    }
    for( int i = 1; i < n; i++ )
    {
        int d = max( 0ll, a[i + 1] - k );
        m += max( 0ll, a[i] - d );
        if( a[i + 1] - a[i] > k ) m -= a[i + 1] - a[i] - k;
        if( m < 0 )
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solution();
    }
    return 0;
}
