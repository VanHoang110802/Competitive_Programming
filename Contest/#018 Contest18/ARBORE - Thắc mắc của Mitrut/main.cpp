#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 100005;
const int MOD = 666013;

long long fact[MAXN], invFact[MAXN], ans;
vector<int> tree[MAXN];
int n, sz[MAXN];

long long power(long long x, int n) {
    long long ans = 1;
    while (n) {
        if (n&1) ans = (ans * x) % MOD;
        x = (x * x) % MOD;
        n >>= 1;
    }
    return ans;
}

long long C(int n, int k) {
    if (k > n) return 0;
    return (fact[n] * invFact[k] * invFact[n-k]) % MOD;
}

void dfs(int u, int p) {
    sz[u] = 0;
    for(int v: tree[u]) {
        if (v == p) continue;
        dfs(v, u);
        ans = (ans * C(sz[u] + sz[v], sz[v])) % MOD;
        sz[u] += sz[v];
    }
    sz[u]++;
}

signed main() {
    fact[0] = invFact[0] = 1;
    for(int i = 1; i < MAXN; ++i) {
        fact[i] = (fact[i-1] * i) % MOD;
        invFact[i] = power(fact[i], MOD-2);
    }

    cin >> n;
    for(int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    ans = 1;
    dfs(1, -1);

    cout << ans << '\n';

    return 0;
}
