/*
10
2 28 6 5 7 10 23 28 13 3

23 6 28 13 7 10 5 28 3 2

10
8128 13 15 59 66 28 9 73 12 17

6
5 6 5 28 5 6
*/

// ~3 * 1e6
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define int long long
const int N = 1e6 + 7;
bool prime[N];
int arr[N], perfect[N];
int n;
map<int, bool> MAP;
vector<int> v1, v2;

int POW(int x, int y)
{
    if (y == 0) return 1;
    if (x == 0) return 0;
    int temp = POW(x, y / 2);
    if (y % 2 == 0)	return (temp * temp);
    else return (temp * temp * x);
}

void SieveOfEratosthenes() // O(N * log(log(N))
{
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i * i <= N; ++i)
    {
        if(prime[i] == true)
        {
            for(int j = i * i; j <= N; j += i)
                prime[j] = false;
        }
    }
}

void SangSoHoanHao() // 8 lan chay la maximum
{
    int ans = 0, i = 1;
    while(1)
    {
        if(prime[i])
        {
            ans = POW(2, i - 1) * (POW(2, i) - 1);
            MAP[ans] = true;
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
        if(MAP[arr[i]]) v1.push_back(arr[i]);
        if(prime[arr[i]]) v2.push_back(arr[i]);
    }

    sort(v2.begin(), v2.end(), greater<int>()); // O(N * log(N)) = 2 * 1e6
    sort(v1.begin(), v1.end());                 // O(N * log(N)) = 8 * log(8) = 16

    int j = 0, k = 0;
    for(int i = 1; i <= n; ++i) // O(N)
    {
        if(prime[arr[i]])
            arr[i] = v2[k++];

        if(MAP[arr[i]])
            arr[i] = v1[j++];

        cout << arr[i] << ' ';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    SieveOfEratosthenes();
    SangSoHoanHao();
    Nhap();
    XuLy();
    return 0;
}
