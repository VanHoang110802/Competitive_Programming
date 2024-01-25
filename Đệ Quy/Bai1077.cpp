/*
Tính số hạng thứ n của dãy

X(0) = 1
X(n) = n^2.x(0) + (n – 1)^2.x(1) + … + (n – i)^2.x(i) +… + 2^2.x(n – 2) + 1^2.x(n – 1)
*/
#include <iostream>
#include <math.h>
using namespace std;

int DeQuy(int n)
{
	if(n == 0) return 1;
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        s = s + i * i * DeQuy(n - i);
    }
	return s;
}

int main()
{
    int n = 2;
    int x = DeQuy(n);
    cout << x;
    return 0;
}
