#include <iostream>
using namespace std;

#define int long long
int t;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
	while(t--)
    {
        int n; cin >> n;
        cout << n / 2 << '\n';
    }
    return 0;
}
