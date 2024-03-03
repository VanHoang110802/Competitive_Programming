// Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất của 100 là 25

#include <iostream>
using namespace std;

float DeQuy(int n)
{
    if(n % 2 != 0)
    {
        return n;
    }
    return DeQuy(n/2);

}

int main()
{
    int n = 100;
    float kq = DeQuy(n);
    cout << kq;
    return 0;
}
