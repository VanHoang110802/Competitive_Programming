#include <iostream>
using namespace std;

int a[105][105];
int n, m, k, dem = 0;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void loang(int i, int j) {
	dem++;
	a[i][j] = 0;
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k], j1 = j + dy[k];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]) {
			loang(i1, j1);
		}
	}
}
 
int main() {	
	cin >> n >> m >> k;
	for (int i = 0; i < k; i++) {
		int x, y; cin >> x >> y;
		a[x][y] = 1;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j]) {
				dem = 0;
				loang(i, j);
			}
			ans = max(ans, dem);
		}
	}
	cout << ans;
	return 0;
}
