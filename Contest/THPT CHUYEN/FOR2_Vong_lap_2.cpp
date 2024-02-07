#include<bits/stdc++.h>
using namespace std;
int n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    for (long long i=1;i<=n;i++) cout << '#';
    cout << '\n';
    for (long long i=1;i<=n-1;i++) cout << '#';
    cout << '\n';
    for (long long i=1;i<=n-2;i++) cout << '#';
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}

