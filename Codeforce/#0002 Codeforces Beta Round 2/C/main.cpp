#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int MAXN = 3;
const double eps = 1e-5;
int test;
double x[MAXN], y[MAXN], r[MAXN], t[MAXN];

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

double check(double tx, double ty)
{
	double ans=0;
	for(int i = 0; i < MAXN; ++i)
    {
        t[i] = sqrt((tx - x[i]) * (tx - x[i]) + (ty - y[i]) * (ty - y[i])) / r[i];
    }

	for(int i = 0; i < MAXN; ++i)
    {
        ans += (t[i] - t[(i + 1) % MAXN]) * (t[i] - t[(i + 1) % MAXN]);
    }
	return ans;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        double x0 = 0, y0 = 0;
        for(int i = 0; i < MAXN; ++i)
        {
            cin >> x[i] >> y[i] >> r[i];
            x0 += x[i];
            y0 += y[i];
        }
        x0 /= 3;
        y0 /= 3;
        double d = 1;
        while(d > eps)
        {
            if(check(x0, y0) > check(x0 + d, y0))
            {
                x0 += d;
            }
            else if(check(x0, y0) > check(x0 - d, y0))
            {
                x0 -= d;
            }
            else if(check(x0 ,y0) > check(x0 ,y0 + d))
            {
                y0 += d;
            }
            else if(check(x0, y0) > check(x0, y0 - d))
            {
                y0 -= d;
            }
            else
            {
                d *= 0.5;
            }
        }
        if(check(x0, y0) < eps)
        cout << fixed << setprecision(5) << x0 << ' ' << y0 << '\n';
    }
    return 0;
}
