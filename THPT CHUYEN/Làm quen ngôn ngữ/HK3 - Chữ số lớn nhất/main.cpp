#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long

bool CMP(const char &a, const char &b)
{
    if(a > b) return true;
    return false;
}

void XuLy()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end(), CMP);
    cout << s[0];
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
