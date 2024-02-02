#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
const int oo = 1000000007;
int prefix[MAXN], a[MAXN];
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int task1(int n)
{
    int res = 0;
    bool allNegative = true;
    for(int i = 0; i < n; ++i)
    {
        if(a[i] >= 0)
        {
            allNegative = false;
            res += a[i];
        }
    }
    if(allNegative) res = *max_element(a, a + n);
    return res;
}

int task2(int n)
{
    int sum = 0, res = -oo;
    for(int i = 0; i < n; ++i)
    {
        sum = sum + a[i];
        res = max(res, sum);
        sum = max(sum, (int)0);
    }
    return res;
}

void HoangDepTrai()
{
    int n; cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    cout << task1(n) << ' ' << task2(n) << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        HoangDepTrai();
    }
    return 0;
}
