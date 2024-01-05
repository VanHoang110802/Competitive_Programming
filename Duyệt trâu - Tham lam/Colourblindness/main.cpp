#include<iostream>
#include<string>
using namespace std;

#define int long long
int test;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test;
    while(test != 0)
    {
        int n, check = 1;
        string x, y;
        cin >> n >> x >> y;
        for(int i = 0; i < n; i++)
        {
            if(x[i] == 'R' && y[i] == 'B')
            {
                check = 0;
                break;
            }
            if(x[i] == 'R' && y[i] == 'G')
            {
                check = 0;
                break;
            }
            if(x[i] == 'B' && y[i] == 'R')
            {
                check = 0;
                break;
            }
            if(x[i] == 'G' && y[i] == 'R')
            {
                check = 0;
                break;
            }
        }
        if(check == 1) cout << "YES\n";
        else cout << "NO\n";
        test--;
    }
    return 0;
}
