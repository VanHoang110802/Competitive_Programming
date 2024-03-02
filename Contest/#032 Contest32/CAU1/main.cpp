#include<bits/stdc++.h>
using namespace std;

long long D, X, Y;
const double esp = 1e-3;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void File()
{
    if (fopen("BAI1.INP", "r"))
    {
        freopen("BAI1.INP", "r", stdin);
        freopen("BAI1.OUT",  "w", stdout);
    }
}

void GiaiBai()
{
    cin >> D >> X >> Y;
    double ans = ((double)D /(X-Y));
    if(abs(ans - (int)ans) > 0) cout << ((int)ans)+1;
    else cout << ans;
}

int main()
{
    XuLyNhanh();
    File();
    GiaiBai();
    return 0;
}
