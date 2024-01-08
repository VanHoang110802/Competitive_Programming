/*
5
1 3 6 6 17 0
3 4 7 5 7 2
1 1 5 5 11 1
5 4 6 4 6 3
9 0 13 5 16 1

*/
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAXN = 1e3 + 7;
const double esp = 0.00001;
int n;
double a1[MAXN], b1[MAXN], a2[MAXN], b2[MAXN], a3[MAXN], b3[MAXN], DT[MAXN];
int F[MAXN];

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double area(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool NamTrong(double x, double y, int i)
{
    double S = DT[i];
    double AB = distance(a1[i], b1[i], a2[i], b2[i]);
    double BC = distance(a2[i], b2[i], a3[i], b3[i]);
    double CA = distance(a3[i], b3[i], a1[i], b1[i]);

    double AD = distance(a1[i], b1[i], x, y);
    double BD = distance(a2[i], b2[i], x, y);
    double CD = distance(a3[i], b3[i], x, y);

    if(abs(S - (area(AB, BD, AD) + area(CA, CD, AD) + area(BC, CD, BD))) < esp)
    {
        return true;
    }
    return false;
}

void SapXep()
{
    for(int i = 1; i <= n - 1; ++i)
    {
        for(int j = i + 1; j <= n; ++j)
        {
            if(DT[i] > DT[j])
            {
                swap(DT[i], DT[j]);
                swap(a1[i], a1[j]);
                swap(b1[i], b1[j]);
                swap(a2[i], a2[j]);
                swap(b2[i], b2[j]);
                swap(a3[i], a3[j]);
                swap(b3[i], b3[j]);
            }
        }
    }
}

void QHD()
{
    F[1] = 1;
    for(int i = 2; i <= n; ++i)
    {
        F[i] = 1;
        for(int j = 1; j <= i - 1; ++j)
        {
            if(NamTrong(a1[j], b1[j], i) && NamTrong(a2[j], b2[j], i) && NamTrong(a3[j], b3[j], i))
            {
                if(F[i] < F[j] + 1)
                {
                    F[i] = F[j] + 1;
                }
            }
        }
    }
}

void InKQ()
{
    int MAX = -1;
    for(int i = 1; i <= n; ++i)
    {
        MAX = max(F[i], MAX);
    }
    cout << MAX << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a1[i] >> b1[i] >> a2[i] >> b2[i] >> a3[i] >> b3[i];
        double a = distance(a1[i], b1[i], a2[i], b2[i]);
        double b = distance(a2[i], b2[i], a3[i], b3[i]);
        double c = distance(a3[i], b3[i], a1[i], b1[i]);
        DT[i] = area(a, b, c);
    }
    SapXep();
    QHD();
    InKQ();
    return 0;
}
