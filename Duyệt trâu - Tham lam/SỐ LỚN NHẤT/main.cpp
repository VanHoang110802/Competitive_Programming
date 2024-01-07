#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define int long long
int n;
string a[111];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a+n, greater<string>());
    for (int i = 0; i < n; ++i) cout << a[i];
    return 0;
}
