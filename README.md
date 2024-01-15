# ABCXYZ
Mình thiệt thòi hơn người ta, thì mình phải cố gắng chăm gấp đôi hơn người ta...

# MẪU (TEMPLATE)

```
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {

    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

# =============

/*
Cerr là luồng lỗi chuẩn được sử dụng để xuất lỗi. Nó cũng là biến thể của lớp ostream. Vì cerr không được đệm nên nó được sử dụng khi cần hiển thị thông báo lỗi ngay lập tức.
Ngoài ra nó không có bộ đệm để lưu thông báo lỗi và hiển thị sau.
*/
