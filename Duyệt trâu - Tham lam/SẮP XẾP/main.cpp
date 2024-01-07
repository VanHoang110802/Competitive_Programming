#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
int n;
map<int, int> cnt, p;
vector<int> a;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    int pri = 0;
    for(int i = 1; i <= n; ++i)
    {
        int x; cin >> x;
        if (!cnt[x])
        {
            a.push_back(x);
            p[x] = pri++;
        }
        ++cnt[x];
    }
    sort(a.begin(), a.end(), [](const int &x, const int &y)
    {
        return (cnt[x] > cnt[y] || (cnt[x] == cnt[y] && p[x] < p[y]));
    });

    for(int x : a) while (cnt[x]--) cout << x << ' ';
    return 0;
}
