#include<bits/stdc++.h>
using namespace std;
long long x, y;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> x >> y;
    if (y == 0) cout << "ERROR";
    else
    {
        long long u = x / (__gcd(x, y)), v = y / (__gcd(x, y));
        if (u > 0 && v < 0)
        {
            u = -u;
            v = -v;
        }
        cout << u << " " << v;
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
