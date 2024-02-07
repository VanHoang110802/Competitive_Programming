/*
#include<bits/stdc++.h>
using namespace std;

const long long m = 1e9+7;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

long long POW(long long x, long long n)
{
    if(n == 0) return 1;
    else if (n % 2 == 0)
    {
        long long motNuaCuaX = POW(x, n/2);
        return (motNuaCuaX * motNuaCuaX) % m;
    }
    else return (x * POW(x, n-1)) % m;
}

void GiaiBai()
{
    long long x, n; cin >> x >> n;
    if(x == 1) cout << 1;
    else cout << ((POW(x, n+(1*1LL))-(1*1LL)) / (x-(1*1LL))) % m;  /// khong bao gio co chuyen phep chia chia duoc mudolo nhe :v
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

const long long M = 1e9+7;

long long calcpow(long long x, long long n, long long mod) {
  if (n == 0) {
    return 1LL;
  }
  long long ret = calcpow(x, n / 2, mod);
  (ret *= ret) %= mod;
  if (n % 2 == 1) {
    (ret *= x) %= mod;
  }
  return ret;
}

long long calc(long long x, long long n, long long mod) {
  long long res = 0LL;
  if (n == 0) {
    return 1LL;
  }
  if (n % 2 == 0) {
    (res += calcpow(x, n, mod)) %= mod;
    (res += calc(x, n - 1, mod)) %= mod;
  }
  else {
    long long mul = (1 + calcpow(x, n / 2 + 1, mod)) % mod;
    (mul *= calc(x, n / 2, mod)) %= mod;
    res = mul;
  }
  return res;
}

int main ()
{
    long long x, n;
    cin >> x >> n;
    cout << calc(x, n, M);
  return 0;
}
