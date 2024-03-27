#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_N = 55;
int a[MAX_N][MAX_N];

void XuLy()
{
    int B, M;
    cin >> B >> M;
    if (M > (1LL << (long long) (B - 2)))
    {
        cout << "IMPOSSIBLE" << '\n';
        //continue;
    }
    else
    {
        cout << "POSSIBLE" << '\n';
        for (int i = 1; i <= B; i++)
        {
            for (int j = 1; j <= B; j++)
            {
                a[i][j] = 0;
            }
        }

        a[1][B] = 1;
        M--;
        for (int i = 2; i <= B; i++)
        {
            for (int j = i + 1; j <= B; j++)
            {
                a[i][j] = 1;
            }
        }

        for (int i = 2; i < B; i++)
        {
            int t = B - i - 1;
            if ((M & (1LL << (long long) t)) > 0)
            {
                a[1][i] = 1;
            }
        }

        for (int i = 1; i <= B; i++)
        {
            for (int j = 1; j <= B; j++)
            {
                cout << a[i][j];
            }

            cout << '\n';
        }
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
