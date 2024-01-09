#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e5;
int n, m;
int a[MAXN], L[MAXN], R[MAXN];

void Insert_left(int i, int j)
{
    R[L[j]] = i;
    L[i] = L[j];
    R[i] = j;
    L[j] = i;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    L[1] = 0;
    R[1] = n + 1;
    L[n + 1] = 1;
    R[0] = L[n + 1];
    for(int a = 1; a <= m; ++a)
    {
        int i, j, k;
        cin >> k;
        if(k == 1)
        {
            cin >> i >> j;
            Insert_left(i, j);
        }
        else if(k == 2)
        {
            cin >> i >> j;
            Insert_left(i, R[j]);
        }
        else if(k == 3)
        {
            cin >> i;
            L[R[i]] = L[i];
            R[L[i]] = R[i];
        }
        else
        {
            cin >> i;
            cout << L[i] << ' ';
            if(R[i] == n + 1) cout << 0 << '\n';
            else cout << R[i] << '\n';
        }
    }
    return 0;
}
