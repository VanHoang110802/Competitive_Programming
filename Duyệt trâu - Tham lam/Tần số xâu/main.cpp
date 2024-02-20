#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
using namespace std;

void HoangDepTraiVC()
{
    string s; cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	map <char, int> MAP;
	int MAX = -1;
	char temp;
	bool checkchar = false;
	for(int i = 0; i < s.size(); ++i)
    {
        MAP[s[i]]++;
        if(MAP[s[i]] > MAX)
        {
            MAX = MAP[s[i]];
        }
    }
    cout << MAP.size() << ' ';
    for(auto x : MAP)
    {
        cout << x.first << x.second << ' ';
        if((int)x.second == MAX && checkchar == false)
        {
            temp = x.first;
            checkchar = true;
        }
    }
    //aaBBBBBBBBBbbBB
    cout << temp << '\n';
}

signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    HoangDepTraiVC();
    return 0;
}
