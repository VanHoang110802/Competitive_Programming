#include <iostream>
using namespace std;

const int MAXN = 3e5 + 5;
int a[MAXN];
int xorSum[MAXN];

signed main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= N; i++) {
        xorSum[i] = xorSum[i - 1] ^ a[i];
    }
    int count = 0;
    for (int l = 1; l <= N; l++) 
    {
        for (int r = l; r <= N; r++) 
        {
            if ((r - l + 1) % 2 == 0) 
            {
                int mid = (l + r) / 2;
                int leftXor = xorSum[mid] ^ xorSum[l - 1];
                int rightXor = xorSum[r] ^ xorSum[mid];

                if (leftXor == rightXor) 
                {
                    count++;
                }
            }
        }
    }
    cout << count << '\n';
    return 0;
}
