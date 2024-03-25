//cong thuc nay co tren wikipedia
//en.wikipedia.org/wiki/Determination_of_the_day_of_the_week
//o phan Schwerdtfeger's method, Sakamoto's methods

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

#define int long long
int ngay, thang, nam;
int Table_Schwerdtfegers[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

void XuLy()
{
    cin >> ngay >> thang >> nam;
    if(thang < 3) nam--;
    int ngayTrongTuan = (nam + (nam / 4) - (nam / 100) + (nam / 400) + Table_Schwerdtfegers[thang - 1] + ngay) % 7;
    if(ngayTrongTuan == 0) cout << "Sunday";
    else if(ngayTrongTuan == 1) cout << "Monday";
    else if(ngayTrongTuan == 2) cout << "Tuesday";
    else if(ngayTrongTuan == 3) cout << "Wednesday";
    else if(ngayTrongTuan == 4) cout << "Thursday";
    else if(ngayTrongTuan == 5) cout << "Friday";
    else if(ngayTrongTuan == 6) cout << "Saturday";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    XuLy();
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
