#include <iostream>
#include <ctime>
using namespace std;

int n;

void Nhap()
{
    cin >> n;
}

void XuLy()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << ' ';
        }
        for(int j = i; j <= n - 1; j++)
        {
            cout << '*';
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
    Nhap();
    XuLy();
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

