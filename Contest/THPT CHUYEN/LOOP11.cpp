#include<bits/stdc++.h>
using namespace std;
double A;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> A;
    double S = 0;
    int n = 0;
    while (S <= A) {
        n++;
        S += 1.0 / n;
    }
    cout << n;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
