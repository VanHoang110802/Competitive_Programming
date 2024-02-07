#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+1;
int n;
struct STRUCT
{
    int a, b;
} arr[MAXN];

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

bool cmp(const STRUCT &temp1, const STRUCT &temp2)
{
    if(temp1.a < temp2.a) return true;
    else if (temp1.a == temp2.a)
    {
        if(temp1.b > temp2.b) return true;
    }
    return false;
}

void GiaiBai()
{
    cin >> n;
    for(int i=0;i<n;++i)
    {
        int x; cin >> x;
        arr[i].a = x;
    }
    for(int i=0;i<n;++i)
    {
        int x; cin >> x;
        arr[i].b = x;
    }
    sort(arr, arr+n, cmp);
    for(int i=0;i<n;++i)
    {
        cout << arr[i].a << ' ' << arr[i].b << '\n';
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
