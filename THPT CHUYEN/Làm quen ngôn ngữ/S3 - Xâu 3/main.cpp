#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

#define int long long

void XuLy()
{
    string s; cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    XuLy();
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
