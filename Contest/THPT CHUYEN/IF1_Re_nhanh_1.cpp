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
    if(n%2) cout << "ODD";
    else cout << "EVEN";
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
