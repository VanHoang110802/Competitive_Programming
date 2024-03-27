#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_N = 20;
char a[20][20];

void XuLy()
{
    int n, D;
    cin >> D >> n;
    D = 15;
    cout << D << ' ' << D << '\n';
    for (int i = 1; i <= D; i++)
    {
        for (int j = 1; j <= D; j++)
        {
            a[i][j] = 'C';
            if (j % 4 == 1)
            {
                a[i][j] = 'A';
            }
        }
    }
    for (int i = 2; i < D; i++)
    {
        for (int j = 2; j <= D; j += 2)
        {
            if (n >= 3)
            {
                a[i][j] = 'B';
                n -= 3;
            }
        }
    }
    for (int j = 2; j <= D; j += 2)
    {
        if (n > 0)
        {
            a[1][j] = 'B';
            n--;
        }
        if (n > 0)
        {
            a[D][j] = 'B';
            n--;
        }
    }
    for (int i = 1; i <= D; i++)
    {
        for (int j = 1; j <= D; j++)
        {
            cout << a[i][j];
        }
        cout << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    cin >> test;
    while(test--)
    {
        XuLy();
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
