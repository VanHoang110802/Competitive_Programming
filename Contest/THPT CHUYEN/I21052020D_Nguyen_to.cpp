#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1e7+1;
const long long MOD = 1e9+7;
bool checkNT[MAXN];

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}


void SangNT()
{
    checkNT[0] = false;
    checkNT[1] = false;
    for(long long i=2; i<=MAXN; ++i) checkNT[i] = true;

    for(long long i=2; i*i<=MAXN; ++i)
    {
        if(checkNT[i])
        {
            for(long long j=i*i; j<=MAXN; j+=i)
            {
                checkNT[j] = false;
            }
        }
    }
}

void GiaiBai()
{
    long long a, b;
    long long tong = 0;
    cin >> a >> b;
    long long idx = 1;
    for(long long i=a;i<=b;++i)
    {
        if(checkNT[i])
        {
            tong = ((tong + (i * idx)) % MOD);
            idx++;
        }
    }
    cout << tong;
}

int main()
{
    XuLyNhanh();
    SangNT();
    GiaiBai();
    return 0;
}
