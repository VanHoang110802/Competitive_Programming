#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string N, canbachai;
bool lachphuong = false;
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

string add(string X, string Y)
{
    string Z = "";
    int lx = X.length();
    int ly = Y.length();
    int l = (lx > ly) ? lx : ly;
    int carry = 0;
    int x, y, sum;
    while(X.length() < l) X = '0' + X;
    while(Y.length() < l) Y = '0' + Y;
    for (int i = l - 1; i >= 0; i--)
    {
        x = (int)X[i] - 48;
        y = (int)Y[i] - 48;
        sum = x + y + carry;
        carry = sum / 10;
        Z = (char)(sum % 10 + 48) + Z;
    }
    if(carry > 0) Z = '1' + Z;
    return Z;
}

string sub(string X, string Y)
{
    string Z = "";
    int lx = X.length();
    int ly = Y.length();
    int l = (lx > ly) ? lx : ly;
    int borrow = 0;
    int x, y, sum;
    while(X.length() < l) X = '0' + X;
    while(Y.length() < l) Y = '0' + Y;
    for (int i = l - 1; i >= 0; i--)
    {
        x = (int)X[i];
        y = (int)Y[i];
        sum = x - y - borrow;
        if (sum < 0)
        {
            sum += 10;
            borrow = 1;
        }
        else borrow = 0;
        Z = (char)(sum % 10 + 48) + Z;
    }
    while((Z.length() > 1) && (Z[0] == '0')) Z.erase(0, 1);
    return Z;
}

string multiply_1(string X, long b)
{
    long carry = 0, s, lx = X.length();
    string Z = "";
    for(int i = lx - 1; i >= 0; i--)
    {
        s = ((int)X[i] - 48 ) * b + carry;
        carry = s / 10;
        Z = (char)(s % 10 + 48) + Z;
    }
    while(carry)
    {
        Z = (char)(carry % 10 + 48) + Z;
        carry /= 10;
    }
    return Z;
}

string multiply(string X, string Y)
{
    long m, lx = X.length(), ly = Y.length();
    string Z = "", tmp = "";
    m = -1;
    for(int i = lx - 1; i >= 0; i--)
    {
        m++;
        tmp = multiply_1(Y, (int)X[i] - 48);
        for(int j = 0; j < m; j++) tmp = tmp + "0";
        Z = add(tmp, Z);
    }
    return Z;
}

string div_1(string X, long b)
{
    int s = 0, hold = 0, lx = X.length();
    string Z = "";
    for(long i=0; i<lx; i++)
    {
        hold = hold*10 + (int)(X[i]) -48;
        s = hold / b;
        hold %= b;
        Z = Z + (char)(s + 48);
    }
    while((Z.length() > 1) && (Z[0] == '0')) Z.erase(0, 1);
    return Z;
}

int cmp(string X, string Y)
{
    int l, lx = X.length(), ly = Y.length();
    l = (lx > ly) ? lx : ly;
    while(X.length() < l) X = '0' + X;
    while(Y.length() < l) Y = '0' + Y;
    if (X == Y) return 0;
    if (X > Y) return 1;
    return -1;
}

void process()
{
    // Thuat toan tim kiem nhi phan
    string min = "", max = "", mid = "", bp = "";
    min = min + "0";
    max = N;
    while(cmp(min, max) != 1)
    {
        mid = div_1(add(max, min), 2);
        bp = multiply(mid, mid);
        if(cmp(bp, N) == 0)
        {
            lachphuong = true;
            canbachai = mid;
            break;
        }
        if(cmp(bp,N) == 1) max = sub(mid, "1");
        else min = add(mid, "1");
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        string temp; cin >> temp;
        N = temp;
        process();
        if(lachphuong)
        {
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';
        lachphuong = false;
    }
    return 0;
}
