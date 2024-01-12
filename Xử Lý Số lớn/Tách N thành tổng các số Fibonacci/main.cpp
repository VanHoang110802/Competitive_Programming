#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int test;
string N, S[500];
string X1, X2, X3;
long count_;
int lS;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int smaller(string X, string Y)
{
    //X<=Y tra ve 1
    int lx = X.length();
    int ly = Y.length();
    int l = (lx > ly) ? lx : ly;
    while(X.length() < l) X = '0' + X;
    while(Y.length() < l) Y = '0' + Y;
    if(X > Y) return 0;
    return 1;
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
    for(int i = l - 1; i >= 0; i--)
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

void creat_F()
{
    X1 = "0";
    S[0] = "0";
    X2 = "1";
    S[1] = "1";
    X3 = add(X1, X2);
    lS = 1;
    while (smaller(X3, N))
    {
        lS++;
        S[lS] = X3;
        X1 = X2;
        X2 = X3;
        X3 = add(X1, X2);
    }
}

int biger2(string X, string Y)
{
    //X>Y tra ve 1
    int lx = X.length();
    int ly = Y.length();
    int l = (lx > ly) ? lx : ly;
    while(X.length() < l) X = '0' + X;
    while(Y.length() < l) Y = '0' + Y;
    if(X > Y) return 1;
    return 0;
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
        if (sum <0)
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

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        string s;
        cin >> s;
        N = s;
        creat_F();
        string X = S[lS];
        while(N != "0")
        {
            cout << X << ' ';
            N = sub(N, X);
            if (N == "0") break;
            while(biger2(S[lS], N))
            {
                lS--;
            }
            X = S[lS];
        }
        cout << '\n';
    }
    return 0;
}
