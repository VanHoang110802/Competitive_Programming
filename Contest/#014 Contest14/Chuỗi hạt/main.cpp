#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
string st;
vector<vector<int>> ans;
vector<int> white;
vector<int> black;

void no()
{
    cout << "-1\n";
    exit(0);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> st;
    n = st.size();
    for(int i = 0; i < n; ++i)
    {
        if(st[i] == '0')
        {
            if(!black.empty())
            {
                ans[black.back()].push_back(i);
                white.push_back(black.back());
                black.pop_back();
            }
            else
            {
                white.push_back(ans.size());
                ans.push_back(vector<int>(1, i));
            }
        }
        else
        {
            if(white.empty()) no();
            ans[white.back()].push_back(i);
            black.push_back(white.back());
            white.pop_back();
        }
    }
    if(!black.empty()) no();
    cout << ans.size() << '\n';
    for(int i = 0; i < (int)ans.size(); ++i)
    {
        cout << ans[i].size() << ' ';
        for(int j : ans[i]) cout << j + 1 << ' ';
        cout << '\n';
    }
    return 0;
}
