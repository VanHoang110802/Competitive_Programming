/*
11 17
1 2 4 7 1 10 2 1 3 4 6

11 17
1 2 4 7 18 2 2 1 3 4 6
*/
#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int a[MAXN];
int n, s, ans;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int i = 1, j = 1, T = a[1];
    ans = n;
    while(i <= j && j <= n)
    {
        if(T < s) T += a[++j];
        else
        {
            ans = min(ans, j - i + 1);
            T -= a[i++];
        }
    }
    cout << ans << '\n';
    return 0;
}
