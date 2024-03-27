#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

void XuLy()
{
    int a, b;
    string s;
    cin >> a >> b;
    cin >> s;
    int cur = 0;
    int lim = 30;
    for (int i = 0; i < 10; i++)
    {
        if (lim < a || cur >= b || (cur >= a && lim < b))
        {
            cout << '-' << '\n';
            continue;
        }
        else if (s[i] == 'H')
        {
            cur++;
            lim -= 2;
        }
        else if (s[i] == 'B')
        {
            lim -= 3;
        }
        else
        {
            cur += 3;
        }
        cout << lim << '\n';
    }
    if (lim < a)
    {
        cout << "XUONG_HANG" << '\n';
    }
    else if (cur >= a && lim < b)
    {
        cout << "KHONG_DOI" << '\n';
    }
    else
    {
        cout << "THANG_HANG" << '\n';
    }
    cout << "#########" << '\n';
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
