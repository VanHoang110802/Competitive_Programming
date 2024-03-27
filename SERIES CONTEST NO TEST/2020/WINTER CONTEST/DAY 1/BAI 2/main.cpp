#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

vector <int> funnyMoment;

void XuLy()
{
    int n;
    cin >> n;
    funnyMoment.clear();
    funnyMoment.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        int funnyTime;
        cin >> funnyTime;
        funnyMoment.push_back(funnyTime);
    }
    funnyMoment.push_back(90);
    bool found = false;
    for (int i = 1; i <= n + 1; i++)
    {
        if (funnyMoment[i] - funnyMoment[i - 1] > 15)
        {
            cout << funnyMoment[i - 1] + 15;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << 90;
    }
    cout << endl;
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
