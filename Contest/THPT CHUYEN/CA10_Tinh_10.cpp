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
    long long ans = (n - 1)*n;
    cout << ans;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
/// Chinh hop chap 2 cua n phan tu: A_2_n = n!/(n-2)!
/// To hop chap 2 cua n phan tu:    C_2_n = n!/(2!*(n - 2)!) = (n - 1)*n/2
