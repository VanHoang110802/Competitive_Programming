#include<bits/stdc++.h>
using namespace std;
void gcd(long long a,long long b,long long &d,long long &x,long long &y)
{
    if (b==0)
    {
        d=a;
        x=1;
        y=0;
    }
    else
    {
        long long x1,y1;
        gcd(b,a%b,d,x1,y1);
        x=y1;
        y=x1-a/b*y1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(fopen("CAU1.INP", "r"))
    {
        freopen("CAU1.INP", "r", stdin);
        freopen("CAU1.OUT", "w", stdout);
    }
    long long a,b,c,d,x,y;
    cin>>a>>b>>c;
    gcd(a,b,d,x,y);
    if(c%d!=0) cout<<0;
    else
    {
        long long t1=ceil(-1.0*c*x/b);
        if (c*x%b==0) t1++;
        long long t2=floor(1.0*c*y/a);
        if(c*y%a==0) t2--;
        if(t1<=t2) cout<<t2-t1+1;
        else cout<<0;
    }
    return 0;
}
