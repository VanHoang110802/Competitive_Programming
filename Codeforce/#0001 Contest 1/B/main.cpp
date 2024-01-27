#include <iostream>
#include <set>
using namespace std;

int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
       int n, m;
       cin >> m >> n;
       set<int> dong, cot;
       for(int i = 0; i < m; ++i)
       {
           for(int j = 0; j < n; ++j)
           {
               char ch; cin >> ch;
               if(ch == 'S')
               {
                   dong.insert(i);
                   cot.insert(j);
               }
           }
       }
       int ans = 0;
       for(int i = 0; i < m; ++i)
       {
           for(int j = 0; j < n; ++j)
           {
               if(dong.find(i) == dong.end() || cot.find(j) == cot.end())
               {
                   ans++;
               }
           }
       }
       cout << ans << '\n';
    }
    return 0;
}
