#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int MOD, x;
int F[MAXN];

int DeQuy(int n)
{
    if(F[n] > -1) return F[n];
    if(n <= 1)
    {
        return n;
    }
    F[n] = (DeQuy(n - 1) + DeQuy(n - 2)) % MOD;
    return F[n];
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> x >> MOD;
    for(int i = 0; i <= x; ++i) F[i] = -1;
    cout << DeQuy(x) << '\n';
    return 0;
}
