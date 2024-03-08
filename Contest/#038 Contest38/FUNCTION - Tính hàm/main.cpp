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

/*
f(1) = -1;
f(2) = -1 + 2 = 1
f(3) = −1 + 2 − 3 = −2
f(4) = −1 + 2 − 3 + 4 = 2
f(5) = −1 + 2 − 3 + 4 - 5 = -3
f(6) = −1 + 2 − 3 + 4 − 5 + 6 = 3
*/
