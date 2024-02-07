#include<bits/stdc++.h>
using namespace std;
int n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

bool CMP(const int &a, const int &b)
{
    if(a > b) return true;
    return false;
}

void GiaiBai()
{
    cin >> n;
    vector<int> a;
    for(int i=0; i<n*2; ++i)
    {
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), CMP);
    for(auto i:a) cout << i << ' ';
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
