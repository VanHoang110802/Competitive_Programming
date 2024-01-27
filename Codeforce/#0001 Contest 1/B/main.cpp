// sorting and binary search

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int cnt = 1, x = a[0];
        b.push_back(0);
        for(int i = 1; i < n; ++i)
        {
            if(a[i] != x)
            {
                cnt++;
                b.push_back(i);
            }
        }
        if(cnt == k)
        {
            cout << "YES\n";
            for(int i = 0; i < b.size(); ++i) cout << b[i] + 1 << ' ';
            cout << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}
