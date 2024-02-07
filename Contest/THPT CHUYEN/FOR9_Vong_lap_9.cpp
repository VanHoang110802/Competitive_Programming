#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;
long long n;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

long long TongGiaiThua(long long N)
{
    long long f = 1, Sum = 0;

    for (long long i = 1; i <= N; i++)
    {
        f = (f * i) % MOD ;
        Sum = (Sum + f) % MOD;
    }
    return Sum;
}

void GiaiBai()
{
    cin >> n;
    long long ans = TongGiaiThua(n);
    cout << ans;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
/// 1! + 2! + 3! + 4! + 5! + 6!
