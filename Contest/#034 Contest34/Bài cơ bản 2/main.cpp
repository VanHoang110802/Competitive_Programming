// Hãy cài đặt hàm đệ quy tính T(n) = n! = 1 x 2 x 3 x … x n. Trong đó T(0) = 1

#include <iostream>
using namespace std;

int DeQuy(int n)
{
    if(n == 0) return 1;
    return DeQuy(n - 1) * n;
}

int main()
{
    int n = 10;
    cout << DeQuy(n);
    return 0;
}
