#include<bits/stdc++.h>
using namespace std;

long long a, b;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> a >> b;
    long long ans = a*b;
    long long cs1 = ans % 10;
    ans /= 10;
    long long cs2 = ans % 10;
    if((cs1 + cs2) % 3 == 0) cout << "YES";
    else cout << "NO";
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
