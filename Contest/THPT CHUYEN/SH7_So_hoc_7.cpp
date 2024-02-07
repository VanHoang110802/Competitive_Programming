//#include<bits/stdc++.h>
//using namespace std;
//
//long long n;
//
//bool isPrime(long long &n)
//{
//    if (n <= 3)
//        return n > 1;
//
//    if (n % 2 == 0 || n % 3 == 0)
//        return false;
//
//    for (int i = 5; i * i <= n; i += 6)
//        if (n % i == 0 || n % (i + 2) == 0)
//            return false;
//
//    return true;
//}
//
//void XuLyNhanh()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(0); cout.tie(0);
//}
//
//bool isPerfectSquare(int x)
//{
//    int s = sqrt(x);
//    return (s * s == x);
//}
//
//bool isFibonacci(long long w)
//{
//       double X1 = 5 * pow(w, 2) + 4;
//       double X2 = 5 * pow(w, 2) - 4;
//
//       long long X1_sqrt = (long long)sqrt(X1);
//       long long X2_sqrt = (long long)sqrt(X2);
//
//       return (X1_sqrt*X1_sqrt == X1) || (X2_sqrt*X2_sqrt == X2) ;
//}
//
//void GiaiBai()
//{
//    cin >> n;
//    for(long long i=n;i>=1;--i)
//    {
//        if(isPrime(i) && isFibonacci(i))
//        {
//            cout << i;
//            break;
//        }
//    }
//}
//
//int main()
//{
//    XuLyNhanh();
//    GiaiBai();
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;
bool iSInt(double x)
{
    return (x == (long long)x);
}

long long Fibo(long long n)
{
    double x = (long long)(pow(1*1LL + sqrt(5*1LL), n) - pow(1*1LL - sqrt(5*1LL), n))% MOD / (long long)(pow(2*1LL, n)*sqrt(5*1LL))% MOD;
    if(!iSInt(x)) x++;
    return (long long)x % MOD;
}


int main()
{
    long long n; cin >> n;
    cout << Fibo(n);
    return 0;
}
