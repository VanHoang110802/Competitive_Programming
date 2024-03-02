#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int MAXN = 1e6;
int cnt[MAXN];

signed main()
{
    string s;
    int T;
    cin >> s >> T;
	s = ' ' + s;
	int n = s.size();
	while (T--)
	{
	    int x; cin >> x;
		cnt[x]++;
		cnt[n - x + 2]--;
	}
	for (int i = 1; i <= n; ++i)
    {
        cnt[i] += cnt[i - 1];
    }
	for (int i = 1; i <= n / 2; ++i)
    {
        if (cnt[i] & 1)
        {
            swap(s[i], s[n - i]);
        }
    }
    for(int i = 1; i < s.size(); ++i) cout << s[i];
    return 0;
}
