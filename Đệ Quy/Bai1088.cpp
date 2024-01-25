//Tính tổng chữ số n

#include <iostream>
#include <math.h>
using namespace std;

float DeQuy(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return DeQuy(n/10) + (n%10);

}
int main()
{
    int n = 110802;
    float kq = DeQuy(n);
    cout << kq;
    return 0;
}
