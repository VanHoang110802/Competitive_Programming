#include <iostream>
#include <string>
using namespace std;

int n;
int64_t fa = 0, fb = 0, ans;
string a, b;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> a >> b;
    n = a.size();
    for(int i = 0; i < n; ++i) fa = fa * 9 + a[i] - 48;
    n = b.size();
    for(int i = 0; i < n; ++i) fb = fb * 9 + b[i] - 48;
    ans = fb - fa + 1;
    cout << ans;
    return 0;
}
