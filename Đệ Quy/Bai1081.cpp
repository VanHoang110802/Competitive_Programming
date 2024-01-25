//Tính S(n) = x + x^2 + x^3 +… + x^n

#include <iostream>
#include <math.h>
using namespace std;

int DeQuy(int x, int n)
{
    if(n == 1) return x;
    return DeQuy(x, n - 1) + pow(x, n);
}

int main()
{
    int x = 3, n = 5;
    int kq = DeQuy(x, n);
    cout << kq;
    return 0;
}
