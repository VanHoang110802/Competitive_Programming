#include<bits/stdc++.h>
using namespace std;

/// muon dem uoc cua 1 so thi phan tich so do ra duoc nhung thua so nguyen to, roi lay so mu cua cac thua so do + 1
/// sau do dem nhan don voi nhau

int PTTS(int n)
{
    int tich = 1;
    map<int, int> MAP;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            n /= i;
            MAP[i]++;
        }
    }
    if (n > 1)
    {
        MAP[n] = 1;
    }

    for (auto x : MAP)
    {
        tich *= (x.second + 1);
    }
    return tich;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    if(fopen("CAU1.INP", "r"))
    {
        freopen("CAU1.INP", "r", stdin);
        freopen("CAU1.OUT", "w", stdout);
    }
    int n, k; cin >> n >> k;
    int cnt = 0;
    for(int i=1;i<=n;++i)
    {
        if(PTTS(i) == k) cnt++;
    }
    cout << cnt;
    return 0;
}
