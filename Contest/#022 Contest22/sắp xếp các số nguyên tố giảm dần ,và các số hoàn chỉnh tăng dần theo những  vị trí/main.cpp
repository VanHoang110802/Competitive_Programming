/*
10
2 28 6 5 7 10 23 28 13 3

23 6 28 13 7 10 5 28 3 2

10
8128 13 15 59 66 28 9 73 12 17

6
5 6 5 28 5 6
*/

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
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

void SieveOfEratosthenes()
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

void SangSoHoanHao()
{
    int ans = 0;
    for(int i = 1; i <= N; ++i)
    {
        if(prime[i])
        {
            ans = POW(2, i - 1) * (POW(2, i) - 1);
            MAP[ans] = true;
        }
        if(ans > 1e18) break;
    }
}

void SortArray()
{
    for(int i = 1; i <= n; ++i) // O(N)
    {
        if(MAP[arr[i]]) v1.push_back(arr[i]);
        if(prime[arr[i]]) v2.push_back(arr[i]);
    }

    sort(v2.begin(), v2.end(), greater<int>()); // O(N * log(N))
    sort(v1.begin(), v1.end());                 // O(N * log(N))

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
    SieveOfEratosthenes();
    SangSoHoanHao();
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> arr[i];
    SortArray();
    //cout << 2 * (N * log(N));
    return 0;
}

