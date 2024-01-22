#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

#define int long long
#define eps 1e-4
const double PI = 3.14159265358979323846;
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

double gcd(double x, double y)
{
    while(fabs(x) > eps && fabs(y) > eps)
    {
        if(x > y)
        {
            x -= floor(x / y) * y;
        }
        else
        {
            y -= floor(y / x) * x;
        }
    }
    return x + y;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        double x0, y0, x1, y1, x2, y2;
        cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
        double a = sqrt((x0 - x1) * (x0 - x1) + (y0 - y1) * (y0 - y1));
        double b = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        double c = sqrt((x0 - x2) * (x0 - x2) + (y0 - y2) * (y0 - y2));

        double p = (a + b + c) / 2;
        double S = sqrt(p * (p - a) * (p - b) * (p - c));
        double r = (a * b  * c) / (4 * S);

        double A = acos((b * b + c * c - a * a) / (2 * b * c));
        double B = acos((c * c + a * a - b * b) / (2 * a * c));
        double C = acos((b * b + a * a - c * c) / (2 * b * a));
        double n = (PI / gcd(C, gcd(A, B)));

        double res = n / 2 * r  * r * sin(2 * PI / n);
        cout << fixed << setprecision(10) << res << endl;
    }
    return 0;
}
