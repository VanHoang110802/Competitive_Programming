#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
string s;
vector <string> a;

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s;
    int n = s.length();
    string temp = "";
    for(int i = 0; i < n; ++i)
    {
        if(s[i] != '+')
        {
            temp += s[i];
        }
    }
    sort(temp.begin(), temp.end());
    a.resize(n);
    int idx = 0;
    for(int i = 0; i < n; ++i)
    {
        if(i % 2 == 0)
        {
            a[i] += temp[idx];
            idx++;
        }
        else a[i] += s[i];
    }
    for(int i = 0;i < n; ++i)
    {
        cout << a[i];
    }
    return 0;
}
