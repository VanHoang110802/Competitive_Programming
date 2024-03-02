#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long

signed main()
{
    int n, a, b;
	cin >> n >> a >> b;
	if (a > b || n < 1) cout << 0;
	else if (n == 1)
    {
        if(a == b) cout << 1;
        else cout << 0;
    }
	else cout << (b - a) * (n - 2) + 1;
    return 0;
}
