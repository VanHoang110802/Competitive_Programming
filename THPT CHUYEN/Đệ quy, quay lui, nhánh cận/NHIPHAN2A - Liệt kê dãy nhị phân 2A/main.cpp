#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int cnt = 0;

void Sinh(string s, char x, bool kt, int n)
{
    if(s.size() == n)
    {
        cnt++;
        cout << s << '\n';
        return;
    }
    if(kt)
    {
        if(x == '0')
        {
            Sinh(s + "0", '0', true, n);
        }
        else
        {
            Sinh(s + "0", '0', true, n);
            Sinh(s + "1", '1', true, n);
        }
    }
    else
    {
        if(x == '0')
        {
            Sinh(s + "0", '0', false, n);
            Sinh(s + "1", '1', true, n);
        }
        else
        {
            Sinh(s + "0", '0', false, n);
            Sinh(s + "1", '1', false, n);
        }
    }
}

void XuLy()
{
    int n;
    cin >> n;
    string s[] = {"0", "1"};
    Sinh(s[0], '0', false, n);
    Sinh(s[1], '1', false, n);
    cout << cnt << '\n';
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
