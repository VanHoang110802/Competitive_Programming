#include <iostream>
#include <cmath>
using namespace std;

int r, h, d, ans;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> h >> r;
    d = (int)(h * sqrt((double)0.75));
    ans = r / d;
    if(ans > 0) --ans;
    cout << ans;
    return 0;
}
