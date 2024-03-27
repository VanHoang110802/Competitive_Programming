#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

void XuLy()
{
    string s1, s2;
    int numb1 = 0, numb2 = 0;
    int a, b;
    cin >> s1 >> s2;
    cin >> a >> b;
    int mini = min(a, b);
    string resname = ".", restime;
    for (int i = 1; i <= a + b; i++)
    {
        string name, Time;
        cin >> name >> Time;
        if (s1 == name)
        {
            numb1++;
        }
        else
        {
            numb2++;
        }
        if (max(numb1, numb2) > mini && resname == ".")
        {
            resname = name;
            restime = Time;
        }
    }
    cout << resname << ' ' << restime << '\n';
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
