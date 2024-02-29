#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int MAXN = 5 * 1e3 + 7;

signed main()
{
    while(true)
    {
        string a, b; cin >> a >> b;
        if(a == "END" && b == "END") break;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a == b) cout << "same\n";
        else cout << "different\n";
    }
    return 0;
}
