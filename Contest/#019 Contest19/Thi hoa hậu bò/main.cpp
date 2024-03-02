#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e6;
pair<int, int> a[MAXN];
int n, d, smax;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> d;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + n + 1);
    int i = 1, j = 2, s = a[1].second;
    while(i <= j && j <= n)
    {
        if(a[j].first - a[i].first <= d)
        {
            s += a[j].second;
            smax = max(smax, s);
            ++j;
        }
        else
        {
            s -= a[i].second;
            ++i;
        }
    }
    cout << smax << '\n';
    return 0;
}
