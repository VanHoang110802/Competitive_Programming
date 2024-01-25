// Hãy đếm số lượng chữ số của số nguyên dương n

#include <iostream>
using namespace std;

float DeQuy(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return DeQuy(n/10) + 1;

}
int main()
{
    int n = 100;
    float kq = DeQuy(n);
    cout << kq;
    return 0;
}
