/*
10
2 28 6 5 7 10 23 28 13 3

23 6 28 13 7 10 5 28 3 2

10
8128 13 15 59 66 28 9 73 12 17

6
5 6 5 28 5 6

15
-6 2 28 52 7 10 8128 -3 23 6 13 -13 79 14 71

*/

// ~3 * 1e6

#include <iostream>
#include <ctime>
#include <map>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
bool CheckNguyenTo[MAXN];
int arr[MAXN], perfect[MAXN];
map<int, bool> CheckSoHoanHao;
vector<int> v1, v2;
int n;

int POW(int x, int y)
{
    if(y == 0) return 1;
    if(x == 0) return 0;
    int temp = POW(x, y / 2);
    if(y % 2 == 0) return (temp * temp);
    else return (temp * temp * x);
}

void SieveOfEratosthenes() // O(log(log(N))
{
    memset(CheckNguyenTo, true, sizeof(CheckNguyenTo));
    CheckNguyenTo[0] = false;
    CheckNguyenTo[1] = false;
    for(int i = 2; i * i <= MAXN; ++i)
    {
        if(CheckNguyenTo[i])
        {
            for(int j = i * i; j <= MAXN; j += i)
            {
                CheckNguyenTo[j] = false;
            }
        }
    }
}

void SangSoHoanHao() // 8 lan chay la maximum
{
    int ans = 0, i = 1;
    while(1)
    {
        if(CheckNguyenTo[i])
        {
            ans = POW(2, i - 1) * (POW(2, i) - 1); // 2^(p - 1) * (2^p) - 1
            CheckSoHoanHao[ans] = true;
        }
        ++i;
        if(ans > 1e18) break;
    }
}

void Nhap()
{
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> arr[i];
}

void XuLy()
{
    for(int i = 1; i <= n; ++i) // O(N)
    {
        if(arr[i] > 1)
        {
            if(CheckSoHoanHao[arr[i]]) v1.push_back(arr[i]);
            else if(CheckNguyenTo[arr[i]]) v2.push_back(arr[i]);
        }
    }

    sort(v2.begin(), v2.end(), greater<int>()); // O(N * log(N)) = 2 * 1e6
    sort(v1.begin(), v1.end());                 // O(N * log(N)) = 8 * log(8) = 16

    int j = 0, k = 0;
    for(int i = 1; i <= n; ++i) // O(N)
    {
        if(CheckNguyenTo[arr[i]])
        {
            arr[i] = v2[k++];
        }
        if(CheckSoHoanHao[arr[i]])
        {
            arr[i] = v1[j++];
        }
        cout << arr[i] << ' ';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    SieveOfEratosthenes();
    SangSoHoanHao();
    Nhap();
    XuLy();
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

