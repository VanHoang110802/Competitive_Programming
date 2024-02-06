#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

#define int long long
#define se second
#define fi first
const int MAXN = 1e5 + 7;
int arr[MAXN];
int test;

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

double tinhGiaTriTrungBinh(int a[], int i, int j)
{
    double tong = 0;
    int dem = 0;
    for (int k = i; k <= j; k++)
    {
        tong += a[k];
        dem++;
    }
    return tong / dem;
}


void FindMinMax(int a[], int n)
{
    double min, max;
    min = tinhGiaTriTrungBinh(a, 0, 1);
    max = min;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double tb = tinhGiaTriTrungBinh(a, i, j);
            if (tb < min)
            {
                min = tb;
            }
            if (tb > max)
            {
                max = tb;
            }
        }
    }
    cout << fixed << setprecision(3) << min << ' ' << max << '\n';
}

void HoangDepTraiVaiCut()
{
    int n; cin >> n;
    for(int i = 0; i < n; ++i) cin >> arr[i];
    FindMinMax(arr, n);
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("01in.txt", "r", stdin);
	CinTest(0);
	while (test--)
	{
		HoangDepTraiVaiCut();
	}
	return 0;
}
