/*
6
15 1
20 1
22 2
25 2
26 3
30 3

*/
#include <iostream>
#include <limits>
using namespace std;

const int MAXN = 1e6 + 7;
int n, ans = INT_MAX;
struct Kid
{
    int x, y;
};
Kid a[MAXN];
int c[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i].x >> a[i].y;
    }
    int i = 1, j = 1, dem = 1;
    c[a[1].y] = 1;
    while(i <= j && j <= n)
    {
        if(dem < 3)
        {
            ++j;
            if(c[a[j].y] == 0) ++dem;
            c[a[j].y]++;
        }
        else
        {
            ans = min(ans, a[j].x - a[i].x);
            c[a[i].y]--;
            if(c[a[i].y] == 0) dem--;
            ++i;
        }
    }
    cout << ans << '\n';
    return 0;
}
