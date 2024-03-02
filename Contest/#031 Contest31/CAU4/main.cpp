#include<bits/stdc++.h>
using namespace std;

template <typename vanhoang>
vanhoang GCD(vanhoang a, vanhoang b)
{
    if (b == 0) return a;
    return GCD(b, a % b);
}

template <typename vanhoang>
vanhoang LCM(vanhoang a, vanhoang b)
{
    return a / GCD(a, b) * b;
}

int main()
{
    freopen("NTLBai4.inp", "r", stdin);
    freopen("NTLBai4.out", "w", stdout);
    long long S, T, N; cin >> S >> T >> N;
    cout << N/LCM(S, T);
    return 0;
}
