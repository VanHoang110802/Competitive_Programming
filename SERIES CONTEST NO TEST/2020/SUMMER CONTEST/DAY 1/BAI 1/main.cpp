#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

bool check(string st, string s)
{
    for (int i = (int) st.size() - 1, j = (int) s.size() - 1; i >= 0; i--, j--)
    {
        if (st[i] != s[j])
        {
            return false;
        }
    }
    return true;
}

void XuLy()
{
    string s;
    bool found = false;
    string res = "NONE";
    cin >> s;
    for (int i = 1; i <= 9; i++)
    {
        string name, st;
        cin >> name >> st;
        if (found == false && check(st, s) == true)
        {
            found = true;
            res = name;
        }
    }
    if (res[(int) res.size() - 1] == ':')
    {
        res = res.substr(0, (int) res.size() - 1);
    }
    cout << res << '\n';
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
