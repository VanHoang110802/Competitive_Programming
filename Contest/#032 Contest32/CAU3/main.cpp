#include<bits/stdc++.h>
using namespace std;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}


void File()
{
    if (fopen("BAI3.INP", "r"))
    {
        freopen("BAI3.INP", "r", stdin);
        freopen("BAI3.OUT",  "w", stdout);
    }
}

void GiaiBai()
{
    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        cout << n/2+1 << '\n';
    }
}

int main()
{
    XuLyNhanh();
    File();
    GiaiBai();
    return 0;
}
