/*
///Trau bo
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    if(fopen("CAU1.INP", "r"))
    {
        freopen("CAU1.INP", "r", stdin);
        freopen("CAU1.OUT", "w", stdout);
    }
    long long a, b ,c, x, y; cin >> a >> b >> c;
    int cnt = 0;
    for(long long i=1; i<= c; ++i)
    {
        for(long long j=1;j<=c;++j)
        {
            if((a*i + b*j) == c) cnt++;
        }
    }
    cout << cnt;
    return 0;
}
*/


/*
//// CPP program to find solution of ax + by = n - 23/24
#include <bits/stdc++.h>
using namespace std;

// function to find the solution
long long gcd(long long a, long long b,long long &x, long long &y){
    if(b == 0)
    {
        x= 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long d = gcd(b, a%b, x1, y1);
    x = y1;
    y = x1 - y1*(a/b);
    return d;
}
void solution(long long a, long long b, long long n)
{
    long long x, y, x0, y0;
    long long g = gcd(a, b, x0, y0);
    int cnt = 0;
    if(n%g != 0)
    {
        cout<<0;
        return;
    }
    long long temp = (n/2);
    for(long long k = -temp; k <= temp; k++){
         x = (x0*n/g) + k*(b/g);
         y = (y0*n/g) - k*(a/g);

        if(x > 0 && y > 0) cnt++;
    }

    cout << cnt;
}

int main()
{
    if(fopen("CAU1.INP", "r"))
    {
        freopen("CAU1.INP", "r", stdin);
        freopen("CAU1.OUT", "w", stdout);
    }

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long a, b ,c; cin >> a >> b >> c;
    solution(a, b, c);
    return 0;
}
*/
// 1 1 1000000000

#include<bits/stdc++.h>
using namespace std;

void GCDMoRong(long long a,long long b,long long &d,long long &x,long long &y)
{
	if (b == 0)
	{
		d = a;
		x = 1;
		y = 0;
	}
	else
	{
		long long x1,y1;
		GCDMoRong(b, a%b, d, x1, y1);
		x = y1;
		y = x1-a/b*y1;
	}
}
int main()
{
	long long a, b, c, d, x, y;
	cin >> a >> b >> c;
	GCDMoRong(a, b, d, x, y);
	if(c%d != 0) cout << 0;
	else
	{
		long long t1 = ceil(-1.0*c*x/b);
		if ((c*x) % b == 0) t1++;
		long long t2 = floor(1.0*c*y/a);
		if((c*y) % a == 0) t2--;
		if(t1 <= t2) cout << t2 - t1 + 1;
		else cout << 0;
	}
	return 0;
}
