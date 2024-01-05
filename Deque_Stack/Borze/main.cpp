#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

#define int long long
int t;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string ss[] = {".", "-.", "--"};
    t = 1;
    while(t--)
	{
	    string s; cin >> s;
	    deque<char> dq;
	    for(int i = 0; i < s.size(); ++i)
        {
            dq.push_back(s[i]);
        }
        string t;
        while(!dq.empty())
        {
            t = t + dq.front();
            if(t == ss[0])
            {
                cout << 0;
                t = "";
            }
            else if(t == ss[1])
            {
                cout << 1;
                t = "";
            }
            else if(t == ss[2])
            {
                cout << 2;
                t = "";
            }
            dq.pop_front();
        }
	}
    return 0;
}
/*
-..-.--
*/
