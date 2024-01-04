#include <iostream>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 5;
int a[MAXN][MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x = 0, y = 0;
    for(int i = 1; i <= MAXN; ++i)
    {
        for(int j = 1; j <= MAXN; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                x = i, y = j;
            }
        }
    }
    cout << abs(x - 3) + abs(y - 3) << '\n';
    return 0;
}
