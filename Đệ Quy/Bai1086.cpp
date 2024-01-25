//Tính S(n) = 1 / (1 + 1 / ( 1 + 1 / (…. 1 + 1 / 1 + 1))) có n dấu phân số

#include <iostream>
#include <math.h>
using namespace std;

float DeQuy(int n)
{
    if(n == 1)
    {
        return 1.0/2;
    }
    return 1.0 / (1 + DeQuy(n - 1));

}
int main()
{
    int n = 100;
    float kq = DeQuy(n);
    cout << kq;
    return 0;
}
