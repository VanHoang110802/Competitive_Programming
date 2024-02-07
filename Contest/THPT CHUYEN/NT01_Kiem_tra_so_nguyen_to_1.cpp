http://thptchuyen.ntucoder.net/Problem/Details/9919

#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+1;
bool Check[MAXN];
int n;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void SangNT()
{
    for(int i=0; i<=MAXN; ++i)
    {
        Check[i] = true;
    }
    Check[0] = false;
    Check[1] = false;
    for(int i=2; i*i<=MAXN; ++i)
    {
        if(Check[i])
        {
            for(int j=i*i; j<=MAXN; j+=i)
            {
                Check[j] = false;
            }
        }
    }
}

void GiaiBai()
{
    SangNT();
    cin >> n;
    if(Check[n]) cout << "YES";
    else cout << "NO";
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
