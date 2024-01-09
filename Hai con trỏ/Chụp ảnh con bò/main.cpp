/*
6 3
1 4 1 2 4 1
A 1 3
B 4 2
B 6 1

*/

#include <iostream>
using namespace std;

const int MAXN = 1e5 + 7;
const int MAXB = 2 * (1e5 + 7);
int id[MAXN], a[MAXN], b[MAXB], c[MAXN], L[MAXN], R[MAXN];
int n, m, d = 0, Lmin;

void Xoa(int x)
{
    L[R[x]] = L[x];
    R[L[x]] = R[x];
}

void Chen(int x, int y)
{
    R[L[y]] = x;
    L[x] = L[y];
    R[x] = y;
    L[y] = x;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        id[i] = i;
    }
    Lmin = n;
    for(int i = 1; i <= n; ++i)
    {
        if(c[a[i]] == 0)
        {
            d++;
            c[a[i]] = 1;
        }
    }
    R[0] = 1;
    L[n + 1] = n;
    for(int i = 1; i <= n; ++i)
    {
        L[i] = i - 1;
        R[i] = i + 1;
    }

    for(int i = 1; i <= m; ++i)
    {
        char x;
        int j, k;
        cin >> x >> j >> k;
        Xoa(j);
        if(x == 'A') Chen(j, k);
        else Chen(j, R[k]);
    }
    int temp = 0;
    for(int p = R[0]; p != n + 1; p = R[p])
    {
        b[++temp] = a[p];
    }
    for(int i = 0; i <= MAXN - 1; ++i)
    {
        c[i] = 0;
    }
    int i = 1, j = 1, dem = 1;
    c[b[1]] = 1;
    while(i <= j && j <= n)
    {
        if(dem < d)
        {
            ++j;
            if(c[b[j]] == 0) dem++;
            c[b[j]]++;
        }
        else
        {
            Lmin = min(Lmin, j - i + 1);
            c[b[i]]--;
            if(c[b[i]] == 0) dem--;
            ++i;
        }
    }
    cout << Lmin << '\n';
    return 0;
}
