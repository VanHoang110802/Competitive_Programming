#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int a[2005], result[2005];
vector<int> listID[2005];
int n;

void XuLy()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        listID[a[i]].push_back(i);
    }
    sort(a + 1, a + n + 1);
    int higherScore = 2005;
    int curRank = -1;
    for(int i = n; i >= 1; --i)
    {
        if(higherScore != a[i])
        {
            higherScore = a[i];
            curRank = n - i + 1;
        }
        int lastid = listID[a[i]].back();
        listID[a[i]].pop_back();
        result[lastid] = curRank;
    }
    for(int i = 1; i <= n; ++i)
    {
        cout << result[i] << ' ';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    XuLy();
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
