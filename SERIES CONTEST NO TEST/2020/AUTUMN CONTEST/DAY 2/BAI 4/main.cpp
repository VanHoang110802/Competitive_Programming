#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

string s[7] = {"Do", "Re", "Mi", "Fa", "Son", "La", "Si"};

void XuLy()
{
    int n, m;
    cin >> n >> m;
    vector <int> a;
    for (int i = 1; i <= n; i++)
    {
        string node;
        cin >> node;
        for (int j = 0; j < 7; j++)
        {
            if (node == s[j])
            {
                a.push_back(j);
            }
        }
    }
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] < a[i] && a[i] > a[i + 1])
        {
            res++;
        }
        else if (a[i - 1] > a[i] && a[i] < a[i + 1])
        {
            res++;
        }
    }
    if (res >= m)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
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
