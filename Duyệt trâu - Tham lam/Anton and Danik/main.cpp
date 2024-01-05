#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

#define int long long
int n, cnt = 0;
string s;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    sort(s.begin(), s.end());
    for(int i = 0; i < n; ++i)
    {
    	if(s[i] == 'A') cnt++;
	}
	int num = n - cnt;
	if(num < cnt) cout << "Anton";
	else if(num > cnt) cout << "Danik";
	else cout << "Friendship";
    return 0;
}
