#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 5;
const int MAXNPOW_5 = 5 * 1e16;
int a[MAXN];
int test;

int SoLuongSoKhong(int k)
{
    int s = 0, pow5 = 5;
    while(pow5 <= k)
    {
        s += (k / pow5);
        pow5 *= 5;
    }
    return s;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test;
    while(test--)
    {
        int n; cin >> n;
        int l = 1, r = MAXNPOW_5;
        while(r - l > 1)
        {
            int m = (r + l) / 2;
            if(SoLuongSoKhong(m) >= n) r = m;
            else l = m;
        }
        cout << r << '\n';
    }
    return 0;
}
