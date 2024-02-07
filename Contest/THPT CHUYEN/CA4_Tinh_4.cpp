#include<bits/stdc++.h>
using namespace std;
long long n, k;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

/*
 Ý tưởng là N + K chia cho K.
 Nếu số dư là 0 thì in N, nếu khác thì in N + K - số dư.

 N = 16, K = 9 -> 18
 N = 45, K = 6 -> 48
 N = 10, K = 3 -> 12
*/
long long TimTongNhoHonN(long long n, long long k)
{
    long long temp = (n + k) % k;
    if (temp == 0) return n;
    return (n + k - temp);
}

void GiaiBai()
{
    cin >> n >> k;
    cout << TimTongNhoHonN(n, k);
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}

