#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
const long long x = 2;
long long n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

template <typename vanhoang>
vanhoang POW(vanhoang a, vanhoang n)
{
    vanhoang ans = 1;
    vanhoang temp = a;
    while(n)
    {
        if(n % 2) (ans *= temp) %= MOD;
        temp = temp * temp % MOD;
        n /= 2;
    }
    return ans;
}

void GiaiBai()
{
    cin >> n;
    cout << POW(x, n);
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}

