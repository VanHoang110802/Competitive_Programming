#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, d = 0, s = 0; cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        s += a[i];
    }
    for(int i = 1; i <= n - 1; ++i)
    {
        for(int j = i + 1; j <= n; ++j)
        {
            if((s - a[i] + a[j]) % 2 == 0)
            {
                d++;
            }
        }
    }
    cout << d << '\n';
    return 0;
}
