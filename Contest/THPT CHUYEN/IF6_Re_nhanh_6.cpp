#include<bits/stdc++.h>
using namespace std;
long long a, b, c;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> a >> b >> c;
    if(a + b <= c || a + c <= b || b + c <= a) cout << "NO";
    else cout << "YES";
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
