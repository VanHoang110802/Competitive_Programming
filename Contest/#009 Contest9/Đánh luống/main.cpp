#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef int64_t ll;
const ll INFL = 1e18 + 123;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    ll best = INFL;
    for(int i = -1; i <= 1; i += 2)
    {
        vector<int> tmp = a;
        for(int j = 0; j < n; j += 2)
        {
            tmp[j] += k * i;
        }
        auto tmp2 = tmp;
        ll sum = 0;
        nth_element(tmp.begin(), tmp.begin() + tmp.size() / 2, tmp.end());
        int val = tmp[tmp.size() / 2];
        for(int num : tmp)
        {
            sum += abs((ll) num - val);
        }
        if(sum < best)
        {
            best = sum;
        }
    }
    cout << best;
    return 0;
}
