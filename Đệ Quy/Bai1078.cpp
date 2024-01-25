// Tính S(n) = 1 + 1/2 + 1/3 + … + 1/n

#include <iostream>
#include <math.h>
using namespace std;

float DeQuy(int n)
{
	if(n == 1) return 1;
	return DeQuy(n - 1) + 1.0 / n;
}

int main()
{
    int n = 2;
    float x = DeQuy(n);
    cout << x;
    return 0;
}
