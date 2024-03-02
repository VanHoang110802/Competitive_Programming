#include <iostream>

#include <algorithm>

#include <cmath>

using namespace std;

const int MAXN = 1e6;
int a[MAXN];

signed main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    if (a[1] >= 2) {
        cout << "NO\n";
        return 0;
    }
    for (int i = 1; i <= n; ++i) {
        int tmpA = a[i], tmpN = i;
        for (int j = 2; j * j <= i; ++j) {
            while (tmpN % j == 0) {
                tmpA /= a[j];
                tmpN /= j;
            }
        }
        if (a[tmpN] != tmpA) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
