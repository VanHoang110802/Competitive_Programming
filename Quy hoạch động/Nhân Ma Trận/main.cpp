#include <iostream>
using namespace std;

#define int long long
int n, MOD;
struct matrix
{
    int val[3][3];
} a, c;

int tich(int a, int b)
{
    a %= MOD;
    b %= MOD;
    int q = (long double)a * b / MOD;
    return ((a * b - q * MOD) % MOD + MOD) % MOD;
}

matrix multiply(matrix a, matrix b)
{
    matrix c;
    for (int i = 1; i <= 2; i++)
        for (int j = 1; j <= 2; j++)
        {
            c.val[i][j] = 0;
            for (int k = 1; k <= 2; k++)
                c.val[i][j] = ((c.val[i][j] + tich(a.val[i][k], b.val[k][j])) % MOD) % MOD;
        }
    return c;
}

matrix mu(matrix a, int k)
{
    if (k == 1)
        return a;
    matrix x = mu(a, k / 2);
    x = multiply(x, x);
    if (k % 2)
        x = multiply(x, a);
    return x;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> MOD;
    if (n < 3)
        cout << 1;
    else
    {
        a.val[1][1] = 1;
        a.val[1][2] = 1;
        a.val[2][1] = 1;
        a.val[2][2] = 0;
        c = mu(a, n - 2);
        cout << (c.val[1][1] + c.val[1][2]) % MOD;
    }
    return 0;
}
