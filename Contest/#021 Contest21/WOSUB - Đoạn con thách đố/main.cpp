/*
11 17
1 2 4 7 1 10 2 1 3 4 6

11 7
1 1 2 2 2 3 4 4 6 7 18

9 15
3 5 5 5 5 4 3 2 1
*/
#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int a[MAXN];
int n, s, ans;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    cin >> s;
    //sort(a + 1, a + n + 1);
    //for(int i = 1; i <= n; i++) cout << a[i] << ' ';
    //cout << '\n';
    int i = 1, j = 1, T = a[1];
    ans = 0;
    while(i <= j && j <= n)
    {
        if(T < s)
        {
            ++j;
            T += a[j];
            //cout << T << '\n';
        }
        else if(T > s)
        {
            T = T - a[i];
            //cout << T;
            ++i;
        }
        else
        {
            ans = max(ans, j - i + 1);
            //cout << '\n' << j - i + 1;
            T = T - a[i];
            ++i;
            //break;
        }
    }
    cout << ans << '\n';
    return 0;
}
