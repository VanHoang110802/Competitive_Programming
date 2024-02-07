#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e7+1;
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
    for(int i=2; i<=MAXN; ++i) checkNT[i] = true;

    for(int i=2; i*i<=MAXN; ++i)
    {
        if(checkNT[i])
        {
            for(int j=i*i; j<=MAXN; j+=i)
            {
                checkNT[j] = false;
            }
        }
    }
}

void GiaiBai()
{
    int a, b;
    long long tong = 0;
    cin >> a >> b;
    for(int i=a;i<=b;++i)
    {
        if(checkNT[i])
        {
            tong += (long long)i;
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
