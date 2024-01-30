# Kỹ thuật mảng cộng dồn
# 1. Tính tổng của một dãy số liên tiếp trên mảng đã được cho trước.
```
Ví dụ:
ID	    1	 2 3 4  5  6  7  8
a	      4 -3 5 3  7  6  9 11
prefix	4	 1 6 9 16 22 31 42
```
- Công thức tổng quát: prefix[i] = a[i] + prefix[i - 1]
```
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        int n; cin >> n;
        vector<int> prefix(n + 1);
        for(int i = 0; i < n; ++i)
        {
            int x; cin >> x;
            prefix[i] = prefix[i - 1] + x;
        }
        int q; cin >> q;
        while(q--)
        {
            int a, b; cin >> a >> b;
            cout << prefix[b] - prefix[a - 1] << '\n';
        }
    }
    return 0;
}
```
-------------------------------------------------------------
# 2. Xác định mảng A sau n truy vấn tăng giảm đoạn từ L tới R một lượng V đơn vị

```
ID	1	2	3	4	5	6	7	8
a	4	-3	5	3	7	6	9	11
```

```
Lần lượt ta nhập từ trái sang:
L  R  V
1  3  2
2  3 -1
3  5  5
6  8  3
2  7  4

n	8							
ID	1	2	3	4	5	6	7	8
a	4	-3	5	3	7	6	9	11
v =  2 	6	-1	7	3	7	6	9	11
v = -1 	6	-2	6	3	7	6	9	11
v =  5 	6	-2	11	8	12	6	9	11
v =  3 	6	-2	11	8	12	9	12	14
v =  4 	6	2	15	12	16	13	16	14
```

-> Tuy nhiên, nếu mà cứ dùng vòng lặp hoài để xét duyệt đi tính như vậy thì sẽ có đpt rất lớn. Vì vậy, ta sẽ phải đi dùng cách khác. 
Ta chỉ cần dùng cái v để làm mốc đánh dấu. Và để tránh việc nó đánh dấu toàn bộ dãy trong mảng, mình cần phải có cái số để chặn khoảng. 
Nghĩa là, mình chỉ có cho phép nó đánh dấu đúng trong khoảng l, r mà cần truy vấn thôi, nếu muốn cụ thể hơn hãy xem bên dưới.
```
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

const int MAXN = 1e6 + 7;
int test;
int a[MAXN], prefix[MAXN], tg[MAXN];

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        int n, q; cin >> n;

        for(int i = 1; i <= n; ++i) cin >> a[i];
        cin >> q;
        while(q--)
        {
            int l, r, v;
            cin >> l >> r >> v;
            tg[l] += v;
            tg[r + 1] -= v;
        }
        for(int i = 1; i <= n; ++i)
            prefix[i] = prefix[i - 1] + tg[i];
        for(int i = 1; i <= n; ++i)
            a[i] += prefix[i];
        for(int i = 1; i <= n; ++i) cout << a[i] << ' ';
    }
    return 0;
}
```
