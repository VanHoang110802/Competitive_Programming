#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
bool isPrime[MAXN];
int n;

void calcSieve()
{
    for(int i = 0; i <= MAXN; ++i) isPrime[i] = true;

    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= MAXN; ++i)
    {
        if(isPrime[i] == true)
        {
            for(int j = i * i; j <= MAXN; j += i)
                isPrime[j] = false;
        }
    }
}

bool KiemTraDoiXung(int n)
{
    ostringstream oss;
    oss << n;
    string s = oss.str();

    int len = s.size(); /// 5
    for(int i = 1; i <= len / 2; ++i)
        if(s[i - 1] != s[len - i])
            return false;

    return true;
}

void XuLy()
{
    calcSieve();
    cin >> n;
    for(int i = n; i >= 2; --i)
    {
        if(isPrime[i] && KiemTraDoiXung(i))
        {
            cout << i;
            break;
        }
    }
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
