#include <iostream>
using namespace std;

#define int long long
int n;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    int cnt = 0;
    while(n)
    {
        n /= 5;
        cnt += n;
    }
    cout << cnt << '\n';
    return 0;
}
