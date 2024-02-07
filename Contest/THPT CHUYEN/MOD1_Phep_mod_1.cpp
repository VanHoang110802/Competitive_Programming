//http://thptchuyen.ntucoder.net/Problem/Details/9850

#include<bits/stdc++.h>
using namespace std;

unsigned long long a, b, c;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> a >> b >> c;
    unsigned long long ans = ((a%c) + (b%c)) % c;
    cout << ans;
}

int main()
{
    XuLyNhanh();
    //File();
    GiaiBai();
    return 0;
}
