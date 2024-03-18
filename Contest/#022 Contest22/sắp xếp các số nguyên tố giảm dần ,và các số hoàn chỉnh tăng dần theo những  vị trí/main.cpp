/*
10
2 28 6 5 7 10 23 28 13 3

23 6 28 13 7 10 5 28 3 2

*/

// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1e6 + 7;
bool prime[N];
const int z = 1e18 + 7;
int perfect[N];
int n;
int arr[N];
map<int, bool> MAP;
vector<int> v1, v2;

struct node
{
    int temp1, temp2;
}
func[N];

int POW(int x, int y)
{
    if (y == 0) return 1;
    if (x == 0) return 0;
    int temp = POW(x, y / 2);
    if (y % 2 == 0)	return (temp % z) * (temp % z) % z;
    else return (temp % z) * (temp % z) % z * (x % z) % z;
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
            //cout << POW(2, i - 1) * (POW(2, i) - 1) << '\n';
            //perfect[idx] = POW(2, i - 1) * (POW(2, i) - 1);
            ans = POW(2, i - 1) * (POW(2, i) - 1);
            MAP[ans] = true;
        }
        if(ans > z) break;
    }
}


void SortArray()
{
    for(int i = 1; i <= n; ++i) // O(N)
    {
        if(MAP[arr[i]]) v1.push_back(arr[i]);
        if(prime[arr[i]]) v2.push_back(arr[i]);
        //if(MAP[arr[i]])
        //{
            //func[i].temp1 = arr[i];
            //cout << func[i].temp1 << '\n';
            //func[i].temp2 = i;
        //}
        //if(prime[arr[i]])
        //{
            //func[i].temp1 = arr[i];
            //func[i].temp2 = i;
        //}
    }
    //for(int i = 1; i <= n; ++i) cout << func[i].temp1 << ' ' << func[i].temp2 << '\n';
    //sort(func + 1, func + n + 1, cmp); // O(N * log(N))
    //for(int i = 1; i <= n; ++i) cout << func[i].temp1 << ' ';

    sort(v2.begin(), v2.end(), greater<int>()); // O(N * log(N))
    sort(v1.begin(), v1.end()); // O(N * log(N))

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
    return 0;
}
// O((n * log n) + (100005) 3/2 )

// O(N*log(log(N))) + O(sqrt(N)) + O(N)
// ~3 * 1e6
// ~1e6
/*
10
1 2 3 4 5 6 7 8 9 10
*/
