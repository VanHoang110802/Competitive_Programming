#include <iostream>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    if(n % 2 == 0) cout << n / 2;
    else cout << ((n / 2) + 1) * -1 << '\n';
    return 0;
}
