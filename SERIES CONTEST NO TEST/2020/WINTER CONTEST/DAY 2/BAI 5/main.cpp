#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

void XuLy()
{
    string chemistry;
    cin >> chemistry;
    for (int i = 0; i < (int) chemistry.size() - 1; i++)
    {
        cout << chemistry[i];
    }
    char oper;
    cin >> oper;
    cin >> chemistry;
    for (int i = 0; i < (int) chemistry.size() - 2; i++)
    {
        cout << chemistry[i];
    }
    cout << '\n';
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
