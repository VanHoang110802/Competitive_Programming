// code chi dung 66.666% toan bo test

#include <iostream>
#include <vector>
#include <utility>
#include <iomanip>
#include <cmath>
using namespace std;

#define ld long double
#define diem pair<ld, ld>
vector<diem> den;
vector<diem> trang;
bool dt, flag = true, A, B, C, D, E, F, G;
const ld epsi = 0.00000001;

void hoi(diem x, bool &X)
{
    cout << "Q " << setprecision(11)<< x.first << " " << x.second << endl;
    cin >> dt;
    X = dt;
    if (!dt) den.push_back(x);
    else trang.push_back(x);
}

void indiem(diem p)
{
    cout << p.first << " " << p.second << " ";
}

double dodai(diem a, diem b)
{
    return sqrt((a.first - b.first)*(a.first-b.first) + (a.second - b.second)*(a.second-b.second));
}

double sosanh(ld a, ld b)
{
    return abs(a - b) < epsi;
}

bool checkdeu(diem a,diem b,diem c)
{
    ld ab = dodai(a,b),bc = dodai(b,c), ac = dodai(a,c);
//    cout << ab << " " << bc << " " << ac << endl;
    return (sosanh(ab,bc) && sosanh(bc,ac)) && sosanh(ac,ab);
}

void traloi()
{
    if (den.size() > 3)
    {
        int n = den.size() - 1;
        for (int i = 0;i <= n - 2;i++)
            for (int j = i + 1;j <= n - 1;j++)
                for (int k = j + 1;k <= n;k++)
                    if (checkdeu(den[i],den[j],den[k]) && flag)
                        {
                            cout << "A ";
                            indiem(den[i]);
                            indiem(den[j]);
                            indiem(den[k]);
                            cout << endl;
                            flag = false;
                        }
    }
    if (trang.size() > 3 && flag)
    {
        int n = trang.size() - 1;
        for (int i = 0;i <= n - 2;i++)
            for (int j = i + 1;j <= n - 1;j++)
                for (int k = j + 1;k <= n;k++)
                    if (checkdeu(trang[i],trang[j],trang[k]) && flag)
                        {
                            cout << "A ";
                            indiem(trang[i]);
                            indiem(trang[j]);
                            indiem(trang[k]);
                            cout << endl;
                            flag = false;
                        }
    }
    if (den.size() == 3 && flag)
    {
        if (checkdeu(den[0],den[1],den[2]))
        {
            cout << "A ";
            indiem(den[0]);
            indiem(den[1]);
            indiem(den[2]);
            cout << endl;
            flag = false;
        }
    }
    if (trang.size() == 3 && flag)
    {
        if (checkdeu(trang[0],trang[1],trang[2]))
        {
            cout << "A ";
            indiem(trang[0]);
            indiem(trang[1]);
            indiem(trang[2]);
            cout << endl;
            flag = false;
        }
    }
}

signed main()
{
    diem a = make_pair(6,4);
    diem b = make_pair(8,4);
    diem c = make_pair(7,5.7320508076);
    hoi(a,A);
    hoi(b,B);
    hoi(c,C);
    traloi();

    diem d = make_pair(1.0*(6 + 8)/2,4);
    diem e = make_pair(1.0*(7 + 8)/2,1.0*(4 + 5.7320508076)/2);
    diem f = make_pair(1.0*(7 + 6)/2,1.0*(4 + 5.7320508076)/2);
    if (flag) hoi(d,D);
    traloi();
    if (flag) hoi(e,E);
    traloi();
    if (flag) hoi(f,F);
    traloi();

    diem g,h;
    if (A == E && C == F && A != C)
    {
        g = make_pair(f.first*2-d.first,f.second*2-d.second);
    }
    else if (C == E && B == F && C != B)
    {
        g = make_pair(e.first*2-d.first,e.second*2-d.second);
    }
    else if (E == B && C == D && E != C)
    {
        g = make_pair(e.first*2-f.first,e.second*2-f.second);
    }
    else if (D == B && A == E && D != A)
    {
        g = make_pair(d.first*2-f.first,d.second*2-f.second);
    }
    else if (A == D && B == F && A != B)
    {
        g = make_pair(d.first*2-e.first,d.second*2-e.second);
    }
    else
    {
        g = make_pair(f.first*2-e.first,f.second*2-e.second);
    }

    if (flag) hoi(g,G);
    traloi();
    return 0;
}
