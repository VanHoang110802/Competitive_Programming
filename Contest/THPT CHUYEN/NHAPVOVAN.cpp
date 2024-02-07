
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, capacity;
    cin >> n >> capacity;

    vector<int> weight(n), value(n);
    for (int i = 0; i < n; ++i)
        cin >> weight[i] >> value[i];

    vector<vector<long long> > f(n + 1, vector<long long>(capacity + 1, 0LL));
    for (int i = 1; i <= n; ++i)
    {
        for (int w = 1; w <= capacity; ++w)
        {
            if (w >= weight[i - 1]) // neu co the chon
                f[i][w] = max(f[i - 1][w], f[i - 1][w - weight[i - 1]] + value[i - 1]);
            else
                f[i][w] = f[i - 1][w];
        }
    }

    cout << f[n][capacity];
    return 0;
}
