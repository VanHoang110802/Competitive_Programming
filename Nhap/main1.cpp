/*
https://stackoverflow.com/questions/26766440/parallelogram-with-3-loops-with-c
*/

#include <iostream>
#include <iomanip>
using namespace std;

void VeHBH(int n)
{
    int sp, st;
    int r = (n * 2) - 1;

    for(int i = 0; i < r; i++)
    {
        if(i <= (r/2))
        {
            sp = 0;
            st = i + 1;
        }
        else
        {
            sp = i - (r / 2);
            st = r - i;
        }
        for(int j = 0; j < sp; j++) cout << ' ';
        for(int k = 0; k < st; k++) cout << '*';
        cout << '\n';
    }
}

void VeHX(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << '*';
        }
        for (int j = 1; j <= 2 * (n - i); ++j)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; ++j)
        {
            cout << '*';
        }
        cout << '\n';
    }

    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << '*';
        }
        for (int j = 1; j <= 2 * (n - i); ++j)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; ++j)
        {
            cout << '*';
        }
        cout << '\n';
    }
}

void XuLy()
{
    int n;
    cin >> n;
    VeHBH(n);
    //VeHX(n);
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    XuLy();
    cout << "\n\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.";
    return 0;
}
