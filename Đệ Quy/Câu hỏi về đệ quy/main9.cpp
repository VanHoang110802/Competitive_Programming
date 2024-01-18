/*
Nếu thay đổi + thành * thì hàm sẽ trả về kết quả phép tính: a^b
(Lưu ý: trường hợp con nếu muốn nhân phải bắt buộc = 1)
*/

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int DeQuy(int a, int b)
{
    if(b == 0) return 1;
    if(b % 2 == 0) return DeQuy(a * a, b / 2);
    return DeQuy(a * a, b / 2) * a;
}

signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int a, b; cin >> a >> b;
        cout << DeQuy(a, b);
        cout << '\n';
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
