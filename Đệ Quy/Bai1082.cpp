//Tính S(n) = 1 + 1/1+2 + 1/1+2+3+… + 1/1+2+3+…+n

#include <iostream>
using namespace std;

float DeQuy(int n)
{
    float tong = 1;
    for(int i =0;i<n;++i)
    {
        tong += i;
    }
    if(n == 1) return 1;
    return DeQuy(n - 1) + 1.0/ tong;
}
int main()
{
    int n = 5;
    float kq = DeQuy(n);
    cout << kq;
    return 0;
}
