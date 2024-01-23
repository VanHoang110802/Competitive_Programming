#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    int n, m; cin >> n >> m;
    vector<int> a[n];
    int j = 0;
    for(int i = 1; i <= n * m; ++i)
    {
        a[j].push_back(i);
        if(i % m == 0) ++j;
    }
    for(int i = 0; i < n; ++i)
    {
        if(i % 2 == 1)
        {
            reverse(a[i].begin(), a[i].end());
        }
    }
    int i = 0;
    while(i < n)
    {
        for(auto x : a[i])
        {
            cout << x << ' ';
        }
        cout << '\n';
        ++i;
    }
    return 0;
}
