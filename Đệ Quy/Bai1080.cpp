// Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3…n

#include <iostream>
using namespace std;

int TinhGiaiThua(int n)
{
    if(n == 1) return 1;
    return TinhGiaiThua(n - 1) * n;
}
int DeQuy(int n)
{
    if(n == 1) return 1;
    return DeQuy(n - 1) + TinhGiaiThua(n);
}

int main()
{
    int n = 5;
    int kq = DeQuy(n);
    cout << kq;
    return 0;
}
