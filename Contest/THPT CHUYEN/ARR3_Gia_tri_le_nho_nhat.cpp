#include<bits/stdc++.h>
using namespace std;
int n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    int MIN = INT_MAX;
    for(int i=0; i<n; ++i)
    {
        int x; cin >> x;
        if((x < MIN) && (x % 2)) MIN = x;
    }
    cout << MIN;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
