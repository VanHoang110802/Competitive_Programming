/*
Tính S(x, n) = x^n
Với n > 0 -> (ví dụ = 3) thì x^3 chính là x*x*x
Với n < 0 ->  (ví dụ = -3) thì x^-3 chính là 1 / x*x*x
*/

#include <iostream>
#include <math.h>
using namespace std;

float DeQuy(int x, int n)
{
    if(n < 0)
    {

        if(n == -1) return 1.0/x;
        return DeQuy(x, n + 1) * 1.0/x;
    }
	if(n == 0) return 1;

    if (n == 1) return x;
    return DeQuy(x, n - 1) * x;
}

int main()
{
    int x = 2, n = -3;
    float kq = DeQuy(x, n);
    cout << kq;
    return 0;
}
