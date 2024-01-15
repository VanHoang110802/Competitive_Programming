// Hay code lai bai tim day con co tong >= S. Neu khong tim day con thi in ra -1

/*
Nhận xét: Khả năng kết quả sẽ nằm trong đoạn từ [1..n]
Nghĩa là trường hợp nhỏ nhất, thì độ dài của dãy sẽ = 1
Trường hợp lớn nhất thì độ dài lớn nhất sẽ = n
Nếu mà muốn chặt nhị phân trên kết quả thì sẽ phải có 1 hàm gì đó check công thức cần xét. Ở đây, mình cần 1 hàm check để kiểm tra xem trong dãy a có tồn tại dãy con k phần tử tổng >= S hay không?
Để kiểm tra dãy con có k phần tử liên tiếp có tổng >= S sẽ dùng kĩ thuật cửa sổ trượt.
*/

#include<iostream>
#include<vector>
using namespace std;

int test;

void CinTest(int temp_test)
{
    if(temp_test > 0) cin >> test;
    else test = 1;
}

bool Check(vector<int> a, int n, int k, int x)
{
    int sum = 0;
    for(int i = 0; i < x; ++i)
    {
        sum += a[i];
    }
    if(sum >= k)
    {
        return true;
    }
    for(int i = x; i < n; ++i)
    {
        sum = sum - a[i - x] + a[i];
        if(sum >= k)
        {
            return true;
        }
    }
    return false;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test > 0)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        int l = 0, r = n - 1, ans = -1;
        while(l <= r)
        {
            int m = (l + r) / 2;
            if(Check(a, n, k, m))
            {
                ans = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        cout << ans << '\n';
        test--;
    }
    return 0;
}
