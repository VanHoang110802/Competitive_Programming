// Tính S(n) = 1 + 2 + 3 + … + n

#include <iostream>
using namespace std;

int DeQuy(int n)
{
    if(n == 1) return 1;
    return DeQuy(n - 1) + n;
}

int main()
{
    int n = 5;
    cout << DeQuy(n);
    return 0;
}
