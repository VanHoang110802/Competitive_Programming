#include <bits/stdc++.h>
using namespace std;

const int64_t mod = 1e9+7;
uint64_t t[4] = {0, 1, 1, 1};
uint64_t r[4] = {0, 1, 1, 1};
uint64_t tg[4];
uint64_t n;

void TinhMaTran(uint64_t x[], uint64_t y[], uint64_t z[])
{
    tg[0] = (x[0] * y[0] + x[1] * y[2]) % mod;
    tg[1] = (x[0] * y[1] + x[1] * y[3]) % mod;
    tg[2] = (x[2] * y[0] + x[3] * y[2]) % mod;
    tg[3] = (x[2] * y[1] + x[3] * y[3]) % mod;
    z[0] = tg[0];
    z[1] = tg[1];
    z[2] = tg[2];
    z[3] = tg[3];
}

uint64_t Fibo(uint64_t n)
{
    while(n)
    {
        if(n % 2 == 1) TinhMaTran(r, t, r);
        TinhMaTran(t, t, t);
        n /= 2;
    }h
    return (r[2] % mod);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cout << Fibo(n-1);
    return 0;
}
