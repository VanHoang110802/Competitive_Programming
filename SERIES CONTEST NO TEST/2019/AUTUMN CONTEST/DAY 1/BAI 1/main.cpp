#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

const int MAX_N = 22;
int test;
int A, B, C;
long long dp[MAX_N][2][2][2];
const int len = 20;

string convert(const int &n)
{
    string s = "";
    for (int i = len - 1; i >= 0; i--)
    {
        if ((n & (1 << i)) > 0)
        {
            s += "1";
        }
        else
        {
            s += "0";
        }
    }
    return s;
}

void DynamicProgramming()
{
    string sA = convert(A);
    string sB = convert(B);
    string sC = convert(C);
    for (int i = 0; i < MAX_N; i++)
    {
        for (int a = 0; a <= 1; a++)
        {
            for (int b = 0; b <= 1; b++)
            {
                for (int c = 0; c <= 1; c++)
                {
                    dp[i][a][b][c] = 0;
                }
            }
        }
    }
    dp[0][1][1][1] = 1LL;
    for (int i = 0; i <= len; i++)
    {
        for (int a = 0; a <= 1; a++)
        {
            for (int b = 0; b <= 1; b++)
            {
                for (int c = 0; c <= 1; c++)
                {
                    if (dp[i][a][b][c] == 0)
                    {
                        continue;
                    }
                    long long cur = dp[i][a][b][c];
                    for (int x = 0; x <= (a == 0 ? 1 : sA[i] - '0'); x++)
                    {
                        for (int y = 0; y <= (b == 0 ? 1 : sB[i] - '0'); y++)
                        {
                            int z = x ^ y;
                            if (c == 1 && z > sC[i] - '0')
                            {
                                continue;
                            }
                            int nxta = ((a == 1) && (x == (sA[i] - '0')));
                            int nxtb = ((b == 1) && (y == (sB[i] - '0')));
                            int nxtc = ((c == 1) && (z == (sC[i] - '0')));
                            dp[i + 1][nxta][nxtb][nxtc] += cur;
                        }
                    }
                }
            }
        }
    }
    long long res = 0;
    for (int a = 0; a <= 1; a++)
    {
        for (int b = 0; b <= 1; b++)
        {
            for (int c = 0; c <= 1; c++)
            {
                res += dp[len][a][b][c];
            }
        }
    }
    cout << res << '\n';
}

void XuLy()
{
    cin >> test;
    while(test--)
    {
        cin >> A >> B >> C;
        DynamicProgramming();
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    XuLy();
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
