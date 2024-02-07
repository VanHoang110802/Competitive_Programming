#include <bits/stdc++.h>
using namespace std;

int f[500][500];

bool SoSanhChuoi(string a, string b)
{
    while(a.size() < b.size())
    {
        a = "0" + a;
    }
    while(b.size() < a.size())
    {
        b = "0" + b;
    }
    if(a > b) return true;
    else return false;
}

void QHDChuoi(string m, string n, string res)
{
    string a = m, b = n;
    for(int i=1;i<=m.size();++i)
    {
        for(int j=1;j<=n.size();++j)
        {
            if(a[i] == b[j] && '0' <= a[i] && a[i] <= '9') f[i][j] = f[i-1][j-1] + 1;
            string s = "";
            for(int k = 1; k <= f[i][j]; ++k)
            {
                s = a[i+1-k] + s;
            }
            if(SoSanhChuoi(s, res)) res = s;
        }
    }
    cout << res;
}

int main()
{
    if (fopen("CAU3.INP", "r"))
    {
        freopen("CAU3.INP", "r", stdin);
        freopen("CAU3.OUT",  "w", stdout);
    }
    string res = "", m, n;
    cin >> m >> n;
    QHDChuoi(m, n, res);
    return 0;
}
