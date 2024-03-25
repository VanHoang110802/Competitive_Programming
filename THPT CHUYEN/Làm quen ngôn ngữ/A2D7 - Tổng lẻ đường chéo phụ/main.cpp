#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long
const int MAX = 1e2 + 7;

int Tong(int a[][MAX], int n)
{
    int sum = 0;
    //duyet hang cua ma tran
    for(int i = 1; i <= n; i++)
    {
        //duyet cot cua ma tran
        for(int j = 1; j <= n; j++)
        {
            if(i + j == n + 1 && a[i][j] % 2 == 1)
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}

void XuLy()
{
    int a[MAX][MAX], n;
    cin >> n;

    for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) cin >> a[i][j];

    int kq = Tong(a, n);
    cout << kq;
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
