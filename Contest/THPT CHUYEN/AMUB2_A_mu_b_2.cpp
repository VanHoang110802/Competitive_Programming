// C++ code to find last k digits of a^b
#include <iostream>
using namespace std;
int a, b;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

int power(long long int x, long long int y, long long int p)
{
    long long int res = 1;

    x = x % p;

    while (y > 0)
    {
        if (y & 1) res = (res * x) % p;

        y = y/2;
        x = (x * x) % p;
    }
    return res;
}

int numberOfDigits(int x)
{
    int i = 0;
    while (x)
    {
        x /= 10;
        i++;
    }
    return i;
}

void printLastKDigits(int a, int b, int k)
{
    int temp = 1;
    for (int i = 1; i <= k; i++) temp *= 10;

    temp = power(a, b, temp);

    for (int i = 0; i < k - numberOfDigits(temp); i++) cout << 0;

    if (temp) cout << temp;
}

void GiaiBai()
{
    cin >> a >> b;
    printLastKDigits(a, b, 1);
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
