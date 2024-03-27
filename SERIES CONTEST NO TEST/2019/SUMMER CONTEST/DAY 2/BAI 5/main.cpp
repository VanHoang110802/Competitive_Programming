#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_N = 105;
int dp[MAX_N][MAX_N][MAX_N];

pair <long long, long long> findPoint(long long R, long long C, long long X)
{
    long long l = 1;
    long long r = R;
    long long row = 1;
    while (l <= r)
    {
        long long mid = (l + r) >> 1;
        long long cnt = mid * C;
        if (cnt < X)
        {
            l = mid + 1;
        }
        else
        {
            row = mid;
            r = mid - 1;
        }
    }
    long long col;
    X -= (row - 1) * C;
    if (row % 2 == 1)
    {
        col = X;
    }
    else
    {
        col = C - X + 1;
    }
    return make_pair(row, col);
}

void XuLy()
{
    long long N, M, A, B;
    cin >> N >> M >> A >> B;
    N = min(N, (A + B) / M + 1);
    pair <long long, long long> tmp1 = findPoint(N, M, A);
    pair <long long, long long> tmp2 = findPoint(N, M, A + B);
    cout << (abs(tmp1.first - tmp2.first) + abs(tmp1.second - tmp2.second)) << '\n';
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
