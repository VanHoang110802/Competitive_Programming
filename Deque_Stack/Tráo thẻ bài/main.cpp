#include <iostream>
#include <string>
using namespace std;

const int MAXN = 1e6 + 7;
int n, m;
int L[MAXN], R[MAXN];
string s;

void Xoa(int p)
{
    L[R[p]] = L[p];
    R[L[p]] = R[p];
}

void Chen(int i, int j)
{
    R[L[j]] = i;
    L[i] = L[j];
    R[i] = j;
    L[j] = i;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m >> s;
    for(int i = 1; i <= n; ++i)
    {
        L[i] = i - 1;
        R[i] = i + 1;
    }
    R[0] = 1;
    L[n + 1] = n;
    int p;
    for(auto x:s)
    {

        if(x == 'A')
        {
            p = R[0];
            Xoa(p);
            Chen(p, n + 1);
        }
        else if(x == 'B')
        {
            p = R[R[0]];
            Xoa(p);
            Chen(p, n + 1);
        }
    }
    p = R[0];
    for(int i = 1; i <= m; ++i)
    {
        p = R[p];
    }
    cout << L[p] - 1 << ' ' << p - 1 << ' ' << R[p] - 1 << '\n';
    return 0;
}
