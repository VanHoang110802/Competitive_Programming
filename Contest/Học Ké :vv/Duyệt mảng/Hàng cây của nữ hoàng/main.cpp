#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAXN = 1e3 + 7;
int a[MAXN], b[MAXN];
vector<int> temp, res;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, MIN = 1e9; cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    res.resize(n + 3);
    temp.resize(n + 3);
    for(int i = 1; i <= 1000; ++i)
    {
        b[1] = i;
        for(int j = 2; j <= n; ++j)
        {
            b[j] =  b[j - 1] + k;
        }
        int cnt = 0;
        fill(temp.begin(), temp.end(), 0);
        for(int i = 1; i <= n; ++i)
        {
            if(b[i] != a[i])
            {
                cnt++;
                temp[i] = b[i] - a[i];
            }
        }
        if(cnt < MIN)
        {
            MIN = cnt;
            res = temp;
        }
    }
    cout << MIN << '\n';
    for(int i = 1; i <= n; ++i)
    {
        if(res[i] < 0)
        {
            cout << "- " << i << ' ' << -res[i] << '\n';
        }
        else if(res[i] > 0)
        {
            cout << "+ " << i << ' ' << res[i] << '\n';
        }
    }
    return 0;
}
