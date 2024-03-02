#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+6;

int n;
long long soluong;
int a[MAXN];
long long T[MAXN];

void Nhap()
{
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];

}

void XuLi()
{
    /// Tổ chập gồm k phần từ khác nhau lấy từ n phần tử có sự lặp lại hoặc không có sự lặp lại

	/// Goi T[i] la tong cua a[1..i]
	/// Nhu vay T[i-1] la tong cua cac so a[1..i-1]
	/// Nhu vay T[i] = T[i-1] + a[i]
	/// Sum(a[i..j]) = T[j] - T[i-1];
	T[0] = 0;
	T[1] = a[1];

	for (int i = 2; i <= n; i++) T[i] = T[i - 1] + a[i];

	sort(T, T + n + 1);

	int i = 1;
	int dem = 1;
	soluong = 0;
	while (i <= n)
    {
		if (T[i] == T[i-1]) dem++;
        else
        {
            if (dem >= 2)
            {
                soluong = soluong + ((dem - 1)*1LL*dem)/2;
                ///cout << T[i-1] << ": " << dem << endl;
            }
            /// So cach chon ra 2 so T trong dem so T la bao nhieu ?
            /// To hop chap 2 cua dem phan tu: C_2_dem = dem!/(2!*(dem - 2)!) = (dem - 1)*dem/2
            dem = 1;
        }
		i++;
	}
	if (dem >= 2)
	{
		soluong = soluong + ((dem - 1)*1LL*dem)/2;
		///cout << T[i-1] << ": " << dem << endl;
	}
    cout << soluong;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("TONG.INP", "r", stdin);
    freopen("TONG.OUT", "w", stdout);
    Nhap();
    XuLi();
    return 0;
}
