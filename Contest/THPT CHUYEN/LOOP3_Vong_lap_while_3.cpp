#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;
long long n;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    long long S = 0;
    long long i = 1;
    while(i <= n)
    {
        S = (S + i * i * i) % MOD;
        i++;
    }
    cout << S;
    //long long ans = (long long)pow(((n*(n+1))/2*1LL), 2*1LL);
    //cout << (ans % MOD);
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
