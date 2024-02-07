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
    cout << max(abs(a), abs(b));
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
