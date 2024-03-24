#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define int long long
const int MAXN = 1e5 + 7;
int n, m;
int arr1[MAXN], arr2[MAXN];
vector<int> Myvector[MAXN];
unordered_map<int, bool> CheckDaTonTaiTrongMang;
unordered_map<int, bool> CheckInTrung;
unordered_map<int, bool> check1;
unordered_map<int, bool> check2;
unordered_map<int, bool> check3;

void Nhap()
{
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
        cin >> arr1[i];
        check2[arr1[i]] = true;
    }
    for(int i = 1; i <= m; ++i)
    {
        cin >> arr2[i];
        check3[arr2[i]] = true;
        CheckDaTonTaiTrongMang[arr2[i]] = true;
    }
}

void PhanGiao()
{
    for(int i = 1; i <= n; ++i)
    {
        if(CheckDaTonTaiTrongMang[arr1[i]] && CheckInTrung[arr1[i]] == false)
        {
            cout << arr1[i] << ' ';
            CheckInTrung[arr1[i]] = true;
        }
    }
    cout << '\n';
}

void setup()
{
    for(int i = 1; i <= n; ++i)
    {
        if(!check1[arr1[i]])
        {
            Myvector[i].push_back(arr1[i]);
            check1[arr1[i]] = true;
        }
    }
    for(int i = 1; i <= m; ++i)
    {
        if(!check1[arr2[i]])
        {
            Myvector[i].push_back(arr2[i]);
            check1[arr2[i]] = true;
        }
    }
}

void PhanHop()
{
    setup();
    int flad = 0, MAXMN = max(m, n);
    for(int i = 1; i <= MAXMN; ++i)
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

void PhanBu()
{
    for(int i = 1; i <= m; ++i)
    {
        if(check3.find(arr1[i]) == check3.end() && arr1[i] != NULL)
        {
            cout << arr1[i] << ' ';
        }
    }
    cout << '\n';
    for(int i = 1; i <= n; ++i)
    {
        if(check2.find(arr2[i]) == check2.end() && arr2[i] != NULL)
        {
            cout << arr2[i] << ' ';
        }
    }
    cout << '\n';
}

void XuLy()
{
    PhanGiao();
    PhanHop();
    PhanBu();
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    Nhap();
    XuLy();
    cout << "\n\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.";
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
