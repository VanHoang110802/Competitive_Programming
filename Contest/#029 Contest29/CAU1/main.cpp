#include<bits/stdc++.h>
using namespace std;

int a, b;

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
    cin >> a >> b;
    cout << setprecision(5) << fixed << (double)a*b/(a + b);
}

int main()
{
    XuLyNhanh();
    File();
    GiaiBai();
    return 0;
}
