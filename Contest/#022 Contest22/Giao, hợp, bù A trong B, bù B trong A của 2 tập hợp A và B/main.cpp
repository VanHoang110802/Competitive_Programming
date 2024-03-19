#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int n, m;
int a[MAXN], b[MAXN];
vector <int> Myvector[MAXN];
unordered_map <int, bool> Mymap;
unordered_map <int, bool> check;
unordered_map <int, bool> check1;
unordered_map <int, bool> check2;
unordered_map <int, bool> check3;

void inp()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        check2[a[i]] = true;
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> b[i];
        Mymap[b[i]] = true;
        check3[b[i]] = true;
    }
}

void giao()
{
    for(int i = 1; i <= n; i++)
    {
        if(Mymap[a[i]] && !check[a[i]])
        {
            cout << a[i] << ' ';
            check[a[i]] = true;
        }
    }
    cout << '\n';
}

void setup()
{
    for(int i = 1; i <= n; i++)
    {
        if(!check1[a[i]])
        {
            Myvector[i].push_back(a[i]);
            check1[a[i]] = true;
        }
    }
    for(int i = 1; i <= m; i++)
    {
        if(!check1[b[i]])
        {
            Myvector[i].push_back(b[i]);
            check1[b[i]] = true;
        }
    }
}

void hop()
{
    int flad = 0, MAXMN = max(m, n);
    for(int i = 1; i <= MAXMN; i++)
    {
        if(Myvector[i].size() == 1 && flad == 0)
        {
            for(auto x : Myvector[i])
            {
                cout << x << ' ';
            }
            Myvector[i].erase(Myvector[i].begin());
        }
        else if(Myvector[i].size() == 1 && flad != 0)
        {
            for(auto x : Myvector[i])
            {
                cout << x << ' ';
            }
            Myvector[i].erase(Myvector[i].begin());
            i = flad - 1;
            flad = 0;
        }
        else if(Myvector[i].size() == 2 && flad == 0)
        {
            for(auto x : Myvector[i])
            {
                cout << x << ' ';
                break;
            }
            Myvector[i].erase(Myvector[i].begin());
            flad = i;
        }
        else if(Myvector[i].size() == 2 && flad != 0)
        {
            for(auto x : Myvector[i])
            {
                cout << x << ' ';
                break;
            }
            Myvector[i].erase(Myvector[i].begin());
        }

        if(i == MAXMN && flad != 0)
        {
            i = flad - 1;
        }
    }
    cout << '\n';
}

void Bu()
{
    for(int i = 1; i <= m; ++i)
    {
        if(check3.find(a[i]) == check3.end() && a[i] != NULL)
        {
            cout << a[i] << ' ';
        }
    }
    cout << '\n';
    for(int i = 1; i <= n; ++i)
    {
        if(check2.find(b[i]) == check2.end() && b[i] != NULL)
        {
            cout << b[i] << ' ';
        }
    }
    cout << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    inp();
    giao();
    setup();
    hop();
    Bu();
    return 0;
}

/*
7 6
9 5 8 6 2 7 6
9 2 3 4 6 5

7 6
9 5 8 1 2 7 6
9 2 8 4 6 3

*/
