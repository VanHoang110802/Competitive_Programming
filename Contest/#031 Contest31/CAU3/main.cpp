#include <iostream>
#include <stack>
#include <vector>
using namespace std;
stack <int> S;
int main()
{
    freopen("NTLBai3.inp", "r", stdin);
    freopen("NTLBai3.out", "w", stdout);

    string s;
    int viTri, K;
    cin >> s >> viTri >> K;
    int N = s.size();
    cout << s[viTri-1] << '\n';


    for (long i=0; i<N; i++)
    {
        int tmp_int = s[i] - '0';
        if (S.empty())
        {
            S.push(tmp_int);
        }
        else
        {
            while (!S.empty() && tmp_int < S.top() && K > 0)
            {
                S.pop();
                K--;
            }
            S.push(tmp_int);
        }
    }
    while (K > 0 && !S.empty())
    {
        S.pop();
        K--;
    }
    vector <int> a;
    while (!S.empty())
    {
        int tmp=S.top();
        S.pop();
        a.push_back(tmp);
    }
    for (long i=a.size()-1; i>=0; i--)
        cout<<a[i];

    return 0;
}


/*
197183152 9 4
*/
