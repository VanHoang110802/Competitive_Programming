#include<bits/stdc++.h>
using namespace std;
double n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    int x = (int)n;
    cout << x << ' ' << n-x;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
