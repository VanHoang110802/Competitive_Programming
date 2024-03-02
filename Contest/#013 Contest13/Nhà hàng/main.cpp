#include <iostream>
using namespace std;

int a[100001][3];

bool f(int x, int y)
{
    int val = 0;
    for(int i = 0; i < 3; ++i) val += a[x][i] < a[y][i];
    return (val >= 2);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x;
    cin >> n;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> x;
            a[x - 1][i] = j;
        }
    }
    int res = 0;
    for(int i = 1; i < n; ++i) if (f(i, res)) res = i;
    for(int i = 0; i < n; ++i)
    {

        if (i != res && !f(res, i))
        {
            res = -1;
            break;
        }
    }
    if (res >= 0) res++;
    cout << res;
    return 0;
}
