#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int test;
struct Points
{
    int n;
    string name;
    int score;
    int MAX;
};
map<string, int> MAP, MAP2;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        Points P; cin >> P.n;
        vector<Points> a(P.n);
        for(int i = 0; i < P.n; ++i)
        {
            cin >> a[i].name >> a[i].score;
            MAP[a[i].name] += a[i].score;
        }
        P.MAX = 0;
        for(int i = 0; i < P.n; ++i)
        {
            if(MAP[a[i].name] > P.MAX)
            {
                P.MAX = MAP[a[i].name];
            }
        }
        for(int i = 0; i < P.n; ++i)
        {
            MAP2[a[i].name] += a[i].score;
            if(MAP2[a[i].name] >= P.MAX && MAP[a[i].name] >= P.MAX)
            {
                cout << a[i].name << '\n';
                break;
            }
        }
    }
    return 0;
}
