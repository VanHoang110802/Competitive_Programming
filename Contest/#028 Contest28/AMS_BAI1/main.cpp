#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c % 2 == 0)
    {
        if (a < 0) a = -a;
        if (b < 0) b = -b;
    }
    if (c == 0) cout << "=";
    else if (a < b) cout << "<";
    else if (a > b) cout << ">";
    else cout << "=";
    return 0;
}
