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

bool CheckNguyenTo_1(int n) /// O(sqrt(N))
{
    for(int i = 2; i * i <= n; ++i)
    {
        if(n % i == 0) return false;
    }
    if(n > 1) return true;
    return false;
}

void SangNguyenTo(vector<bool> &NguyenTo, int n) /// O(N*log(N))
{
    fill(NguyenTo.begin(), NguyenTo.end(), true);
    NguyenTo[0] = false;
    NguyenTo[1] = false;
    // Danh dau cac boi lon hon no la so nguyen to
    for(int i = 2; i * i <= n; ++i)
    {
        if(NguyenTo[i])
        {
            for(int j = i * i; j <= n; j += i)
            {
                NguyenTo[j] = false;
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int n; cin >> n;
        vector<bool> a(n, true);
        SangNguyenTo(a, n);
        for(int i = 1; i <= n; ++i)
        {
            if(a[i] == true) cout << i << ' ';
        }
    }
    return 0;
}
