#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int BinarySearch(vector<int> a, int l, int r, int x)
{
    if(l <= r)
    {
        int m = l + (r - l) / 2;
        if(a[m] == x)
        {
            return m;
        }

        if(a[m] > x)
        {
            return BinarySearch(a, l, m - 1, x);
        }
        else return BinarySearch(a, m + 1, r, x);
    }
    return -1;
}

signed main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        int temp = BinarySearch(a, 0, n - 1, x);
        cout << temp << '\n';
    }
    return 0;
}
