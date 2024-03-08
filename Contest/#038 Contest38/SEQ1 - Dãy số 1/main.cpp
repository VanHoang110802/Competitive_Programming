/*
#include <iostream>
#define lli long long int
using namespace std;

int main() {
    int n; cin >> n;
    lli a[n]; cin >> a[0];
    lli smallest = a[0], maxDiff = INT_MIN;
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        smallest = min(smallest, a[i]);
        maxDiff = max(maxDiff, a[i] - smallest);
        cout << a[i] - smallest << '\n';
    }
    cout << smallest << ' ' << maxDiff << endl;
    return 0;
}
*/
#include <iostream>
#include <cstring>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], dp[MAXN];
int n, maxDiff = -1e9;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    memset(dp, 1e9, sizeof dp);
    dp[1] = a[1];
    for(int i = 2; i <= n; ++i)
    {
        dp[i] = min(dp[i - 1], a[i]);
        maxDiff = max(maxDiff, a[i] - dp[i]);
    }
    cout << maxDiff << '\n';
    return 0;
}
