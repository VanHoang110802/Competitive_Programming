#include<bits/stdc++.h>
using namespace std;
long long n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

bool check(long long n)
{
    if (n<2) return 1;
    for (int i=2; i<=sqrt(n); i++) if (n%i==0) return 1;
    return 0;
}

void GiaiBai()
{
    long long n; cin >> n;
    while(check(n)) n++;
    cout << n;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}

