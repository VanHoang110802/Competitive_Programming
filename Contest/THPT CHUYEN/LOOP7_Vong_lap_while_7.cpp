#include<bits/stdc++.h>
using namespace std;
int n;
long long x;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    vector <long long> a;
    for(int i=0;i<n;++i)
    {
        long long x; cin >> x;
        a.push_back(x);
    }
    for(long long i=0;i<a.size();++i)
    {
        if(a[i] < 0)
        {
            x = i;
            break;
        }
    }
    for(long long i=x-1;i>=1;--i)
    {
        if(a[i] > 0)
        {
            cout << a[i];
            break;
        }
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
