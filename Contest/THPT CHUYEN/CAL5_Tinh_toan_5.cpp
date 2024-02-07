#include<bits/stdc++.h>
using namespace std;
long long n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    cout << n*(n+1)*(2*n+1)/6;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
