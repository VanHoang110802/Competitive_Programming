#include<bits/stdc++.h>
using namespace std;
int n;
string s="";
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

bool KiemTraDoiXung(string s)
{
	/// Gia su da chuyen duoc n thanh xau s
	int len = s.size(); /// 5
	for (int i = 1; i <= len/2; i++)
    {
        if (s[i - 1] != s[len - i]) return false;
    }
    return true;
}

void GiaiBai()
{
    cin >> n;
    while(n--)
    {
        long long a, b; cin >> a >> b;
        s += to_string(a+b);
    }
    if(KiemTraDoiXung(s)) cout << "YES";
    else cout << "NO";
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
