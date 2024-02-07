#include<bits/stdc++.h>
using namespace std;
long long ax,ay,bx,by,cx,cy;
long long ab[2], ac[2];
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
   cin >> ax >> ay >> bx >> by >> cx >> cy;
   ab[1] = bx - ax;
   ab[2] = by - ay;
   ac[1] = cx - ax;
   ac[2] = cy - ay;
   if(((ab[1]*ac[2]) - (ab[2]*ac[1]) == 0)) cout << "YES";
   else cout << "NO";
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
