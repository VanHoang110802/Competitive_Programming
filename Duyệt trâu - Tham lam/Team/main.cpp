#include <iostream>
using namespace std;

#define int long long
int n, cnt = 0, temp_cnt;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int a, b, c; temp_cnt = 0;
        cin >> a >> b >>c;
        if(a > 0) temp_cnt++;
        if(b > 0) temp_cnt++;
        if(c > 0) temp_cnt++;
        if(temp_cnt > 1) cnt++;
    }
    cout << cnt;
    return 0;
}
