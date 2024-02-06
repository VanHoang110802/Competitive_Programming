#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

#define int long long
#define se second
#define fi first
int test;

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

int FindUoc(vector<int> arr, int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            bool is_divisor = true;
            for(int j = i; j < n; j += i)
            {
                if(vector<int>(arr.begin() + j, arr.begin() + j + i) != vector<int>(arr.begin(), arr.begin() + i))
                {
                    is_divisor = false;
                    break;
                }
            }
            if(is_divisor)
            {
                return i;
            }
        }
    }
    return n;
}

void HoangDepTraiVaiCut()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    cout << FindUoc(a, n) << '\n';
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
