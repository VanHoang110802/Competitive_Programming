#include <iostream>
using namespace std;

#define int long long
const int MAXN = 101;
int Fibo[MAXN];

int Function(int n)
{
    if(Fibo[n] > 0) return Fibo[n];
    if(n == 1 || n == 0) return n;
    Fibo[n] = Function(n - 1) + Function(n - 2);
    return Fibo[n];
}

void HoangDepTrai()
{
    Fibo[0] = 1;
    Fibo[1] = 1;
    int x; cin >> x;
    cout << Function(x) << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    HoangDepTrai();
    return 0;
}
