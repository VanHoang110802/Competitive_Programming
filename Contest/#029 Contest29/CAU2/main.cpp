#include<bits/stdc++.h>
using namespace std;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void File()
{
    if (fopen("BAI2.INP", "r"))
    {
        freopen("BAI2.INP", "r", stdin);
        freopen("BAI2.OUT",  "w", stdout);
    }
}

void GiaiBai()
{
    long long n; cin >> n;
    long long tong = 0;
    for(long long i=0;i<n;i+=9)
    {
        tong += i;
    }
    cout << tong;
}

int main()
{
    XuLyNhanh();
    File();
    GiaiBai();
    return 0;
}
