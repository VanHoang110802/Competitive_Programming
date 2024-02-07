#include<bits/stdc++.h>
using namespace std;

long long a, b, c, d;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> a >> b >> c >> d;
    cout << min({a, b, c, d});
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
