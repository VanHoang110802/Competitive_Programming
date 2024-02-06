#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int prefix[MAXN], tg[MAXN];
bool nt[MAXN];
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

void SangNT()
{
    for(int i = 2; i <= MAXN; ++i) nt[i] = true;
    for(int i = 2; i * i <= MAXN; ++i)
    {
        if(nt[i])
        {
            for(int j = i * i; j <= MAXN; j += i) nt[j] = false;
        }
    }
    for(int i = 2; i <= MAXN; ++i)
    {
        if(nt[i])
        {
            prefix[i] = prefix[i - 1] + 1;
        }
        else
        {
            prefix[i] = prefix[i - 1];
        }
    }
}

void HoangDepTrai()
{
    int l, r; cin >> l >> r;
    cout << prefix[r] - prefix[l - 1] << '\n';
}

signed main()
{
    SangNT();
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        HoangDepTrai();
    }
    return 0;
}
