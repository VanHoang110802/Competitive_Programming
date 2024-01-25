// Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn

#include <iostream>
#include <math.h>
using namespace std;

float DeQuy(int n)
{
    if(n == 1)
    {
        return sqrt(2);
    }
    return sqrt(2 + DeQuy(n - 1));

}
int main()
{
    int n = 100;
    float kq = DeQuy(n);
    cout << kq;
    return 0;
}
