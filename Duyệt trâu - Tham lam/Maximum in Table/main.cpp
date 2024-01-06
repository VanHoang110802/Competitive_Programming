#include <iostream>
using namespace std;

int arr[10]={1, 2, 6, 20, 70, 252, 924, 3432, 12870, 48620};
int n;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    cout << arr[n - 1];
    return 0;
}
