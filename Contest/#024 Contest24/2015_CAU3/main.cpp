#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1e2+1;
long long a[MAXN];
map<long long, long long> MAP;
long long n;

bool cmp(const string &a, const string &b)
{
    if(a > b) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("CAU3.INP", "r"))
    {
        freopen("CAU3.INP", "r", stdin);
        freopen("CAU3.OUT",  "w", stdout);
    }
    cin >> n;
    if(n == 1)
    {
        cout << 1;
        return 0;
    }

    for (long long i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            n /= i;
            MAP[i]++;
        }
    }
    if (n > 1)
    {
        MAP[n] = 1;
    }
    long long cnt = 0;
    for (auto x : MAP)
    {
        //  cout << x.first << ' ' << x.second << '\n';
        long long FIRST = (long long)x.first;
        long long SECOND = (long long)x.second;
        while(SECOND--)
        {
            a[cnt] = FIRST;
            cnt++;
        }
    }
    string v[cnt];
    //cout << '\n';
    for(long long i=0; i<cnt; ++i)
    {
        v[i] = to_string(a[i]);
    }
    sort(v, v+cnt, cmp);
    for(long long i=0; i<cnt; ++i)
    {
        cout << v[i];
    }
    return 0;
}

/*
3576
47201
159303
2335579
11591110
44772201
*/
