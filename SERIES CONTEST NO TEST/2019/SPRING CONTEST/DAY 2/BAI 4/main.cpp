#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_N = 26;
char a[MAX_N][MAX_N];

void XuLy()
{
    int R, C;
    cin >> R >> C;
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (a[i][j] != '?')
            {
                int x = j - 1;
                while (a[i][x] == '?')
                {
                    a[i][x] = a[i][j];
                    x--;
                }

                x = j + 1;
                while (a[i][x] == '?')
                {
                    a[i][x] = a[i][j];
                    x++;
                }
            }
        }
    }

    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (a[i][j] != '?')
            {
                int x = i - 1;
                while (a[x][j] == '?')
                {
                    a[x][j] = a[i][j];
                    x--;
                }

                x = i + 1;
                while (a[x][j] == '?')
                {
                    a[x][j] = a[i][j];
                    x++;
                }
            }
        }
    }
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
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
