// Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n

#include <iostream>
using namespace std;

float DeQuy(int n)
{
    if(n < 10)
    {
        return n;
    }
    return DeQuy(n/10);

}
int main()
{
    int n = 802;
    float kq = DeQuy(n);
    cout << kq;
    return 0;
}
