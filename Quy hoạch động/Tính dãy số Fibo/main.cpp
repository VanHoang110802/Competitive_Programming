#include <iostream>
using namespace std;

#define int long long
const int MAXN = 100;
int F[MAXN];
int n;

int Fibo(int x)
{
    if(F[x] != -1)
    {
        return F[x];
    }
    if(x == 0 || x == 1)
    {
        return (F[x] = x);
    }
    else
    {
        F[x] = Fibo(x - 1) + Fibo(x - 2);
        return F[x];
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i <= n; ++i) F[i] = -1;
    cout << Fibo(n) << '\n';
    return 0;
}
