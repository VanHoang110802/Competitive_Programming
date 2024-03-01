#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

const int inf = (int)1e9;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    string s, s01, s10, st, s00(k, '0'), s11(k, '1');
    s01 = s00;
    s01[k - 1] = '1';
    s10 = s11;
    s10[k - 1] = '0';
    cin >> s;
    int lmin = -inf, rmin = inf, lmax = -inf, rmax = inf;
    for (int i = 0; i < n - k + 1; ++i)
    {
        st = string(s.begin() + i, s.begin() + i + k);
        if(st == s01) lmin = max(lmin, *max_element(a.begin() + i, a.begin() + i + k) + 1);
        if(st == s00) rmin = min(rmin, *max_element(a.begin() + i, a.begin() + i + k));
        if(st == s10) rmax = min(rmax, *min_element(a.begin() + i, a.begin() + i + k) - 1);
        if(st == s11) lmax = max(lmax, *min_element(a.begin() + i, a.begin() + i + k));
    }
    if (max(lmin, lmax) <= min(rmin, rmax))
        cout << max(lmin, lmax) << ' ' << max(lmin, lmax) << '\n';
    else
        cout << rmin << ' ' << lmax << '\n';
    return 0;
}
