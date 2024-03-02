#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define int long long
const int MAXN = 1e6 + 1;
double prefix[MAXN];
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

void F()
{
    prefix[0] = 0.00000;
    for(int i = 1; i <= MAXN; ++i)
    {
        prefix[i] = sqrt(prefix[i - 1] + 2);
    }
}

void HoangDepTrai()
{
    int n; cin >> n;
    cout << fixed << setprecision(5) << prefix[n] << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    F();
    CinTest(1);
    while(test--)
    {
        HoangDepTrai();
    }
    return 0;
}

/*
include <bits/stdc++.h>
using namespace std ;

define MAXN 100
int main()
{
     int t ; cin >> t;
     while(t--)
    {
            int n ; cin >> n ; double s = 0 ;
            for(int i = 1 ; i <= n ; i++)
            {
                s = sqrt(s + 2);
            }
        cout << fixed << setprecision(5) << s << endl ;
     }
}
*/
