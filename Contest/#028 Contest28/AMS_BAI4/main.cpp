#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+1;
bool isPrime[MAXN];

void SangNT()
{
    for(int i = 0; i <= MAXN;++i)
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i <= sqrt(MAXN); ++i)
    {
         if(isPrime[i] == true)
         {
             // Mark all the multiples of i as composite numbers
             for(int j = 2*i; j <= MAXN; j += i)
                 isPrime[j] = false;
        }
    }
}

bool KiemTraSieuNT(int n)
{
    int tong = 0, temp = n;
    if(n == 11) return true;
    while(n > 0)
    {
        tong += n % 10;
        n /= 10;
    }
    if(isPrime[tong] == false || isPrime[temp] == false) return false;
    return true;
}

int main()
{
    SangNT();
    int a, b; cin >> a >> b;
    int cnt = 0;
    for(int i=a;i<=b;++i)
    {
        if(KiemTraSieuNT(i))
        {
            //cout << i << ' ';
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}


// 2 3 5 7 23 29 31 37 53 59 71 73 79 233 239 293 311 313 317 373 379 593 599 719 733 739 797
// 233 239 293 311 313 317 373 379 593 599 719 733 739 797 2333 2339 2393 2399 2939 3119 3137 3733 3739 3793 3797 5939 7193 7331 7333 7393
// 2 3 5 7 23 29 31 37 53 59 71 73 79 233
