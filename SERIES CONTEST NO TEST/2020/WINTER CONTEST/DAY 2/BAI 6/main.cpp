#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

void XuLy()
{
    string s;
    long long pos;
    cin >> s >> pos;
    pos--;
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    string st = s;
    st += rev_s;
    int len = (int) st.size();
    pos %= len;
    cout << st[pos] << '\n';
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
