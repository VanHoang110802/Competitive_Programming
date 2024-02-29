#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e3 + 7;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, sum; cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    int l = 1, r = n, s = 0;
    while(l <= r)
    {
        if(a[l] > a[r])
        {
            s += a[l];
            l++;
        }
        else
        {
            s += a[r];
            r--;
        }
        if(a[l] > a[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << s << ' ' << sum - s << '\n';
    return 0;
}
