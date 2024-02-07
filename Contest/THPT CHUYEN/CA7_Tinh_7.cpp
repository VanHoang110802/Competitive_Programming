#include<bits/stdc++.h>
using namespace std;

long long n;
const long long k = 3;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

long long nCk(long long n, long long k)
{
    if (k > n) return 0;
    if (k * 2 > n) /*return*/ k = n-k;  //remove the commented section
    if (k == 0) return 1;

    long long result = n;
    for( int i = 2; i <= k; ++i )
    {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

void GiaiBai()
{
    cin >> n;
    cout << nCk(n, k);
}

/// c_3_4  = 4
/// c_3_5  = 10
/// c_3_6  = 20
/// c_3_7  = 35
/// c_3_8  = 56
/// c_3_9  = 84
/// c_3_10 = 120
/// c_3_11 = 165
/// c_3_12 = 220

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
