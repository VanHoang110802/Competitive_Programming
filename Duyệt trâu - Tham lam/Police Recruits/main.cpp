#include <iostream>
using namespace std;

#define int long long
int n, s = 0, cnt = 0;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int x; cin >> x;
        s += x;
        if(s < 0)
        {
            cnt++;
            s = 0;
        }
    }
    cout << cnt << '\n';
    return 0;
}
