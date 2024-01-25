Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không

#include <iostream>
using namespace std;

int DeQuy(int n)
{
    int tong = 0;
    if(n == 0)
    {
        return 1;
    }
    if((n % 10) % 2 == 0) return 0;
    return DeQuy(n/10);
}
int main()
{
    int n = 183;
    int kq = DeQuy(n);
    if(kq == 1) cout << "Yes";
    else cout << "No";
    return 0;
}
