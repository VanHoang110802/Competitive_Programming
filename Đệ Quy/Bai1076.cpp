/*
 Viết hàm tính số hạng thứ n của hai dãy sau:

X(0) = 1
Y(0) = 0
X(n) = x(n – 1) + y(n – 1) (n > 0)
Y(n) = 3 * x(n – 1) + 2 * y(n – 1) (n > 0)
*/
#include <iostream>
#include <math.h>
using namespace std;

float DeQuyXn(float n);
float DeQuyYn(float n);

float DeQuyXn(float n)
{
	if(n == 0) return 1;
	return DeQuyXn(n - 1) + DeQuyYn(n - 1);
}

float DeQuyYn(float n)
{
	if(n == 0) return 0;
	return 3.0*DeQuyXn(n - 1) + 2.0*DeQuyYn(n - 1);
}
int main()
{
    float n = 2;
    float x = DeQuyXn(n);
    float y = DeQuyYn(n);
    cout << x << '\n' << y;
    return 0;
}
