#include <bits/stdc++.h>
using namespace std;

long long a[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    if(fopen("TANGQUA.INP", "r"))
    {
        freopen("TANGQUA.INP", "r", stdin);
        freopen("TANGQUA.OUT", "w", stdout);
    }
    int n; cin >> n;
    a[n];
    int dem = 0;
    int MAX = 0;
    for (long long i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] > MAX) MAX = a[i];
    }
    for (long long i = 0; i < n; ++i)
    {
        {
            if (a[i] == MAX) ++dem;
        }
    }
    cout << dem;
    return 0;
}
