
#include<bits/stdc++.h>
using namespace std;

long long n;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

long long TongUoc(long long n)
{
    long long tong = 0;
    if(n == 1) return tong;

    for (long long i=2; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (i==(n/i)) tong += i;
            else tong += (i + n/i);
        }
    }

    return (tong + 1);
}

void GiaiBai()
{
    cin >> n;
    long long tong = TongUoc(n) + n;
    cout << tong;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}

