#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int test;
string A, B;
long count_;
int lS, csa, csb;
string H = "0123456789ABCDEF";

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
    if (carry > 0) Z = '1' + Z;
    return Z;
}

string multiply_1(string X, long b)
{
    long carry = 0, s, lx = X.length();
    string Z = "";
    for(int i = lx - 1; i >= 0; i--)
    {
        s = ((int)X[i] - 48) * b + carry;
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

string div_1(string X, long b)
{
    int s = 0, hold = 0, lx = X.length();
    string Z = "";
    for(long i = 0; i < lx; i++)
    {
        hold = hold * 10 + (int)(X[i]) - 48;
        s = hold / b;
        hold %= b;
        Z = Z + (char)(s + 48);
    }
    while((Z.length() > 1) && (Z[0] == '0')) Z.erase(0, 1);
    return Z;
}

long mod_1(string X, long b)
{
    int hold = 0, lx = X.length();
    for(long i = 0; i < lx; i++)
    hold = ((int)X[i] - 48 + hold * 10 ) % b;
    return hold;
}

string cs1_to_cs10(string s)
{
    string s2 = "";
    for(int i = 0; i < s.length(); i++)
    {
        s2 = multiply_1(s2, csa);
        int pos = 0;
        for(int p = 0; p < 16; p++)
        {
            if(s[i] == H[p])
            {
                pos = p;
                break;
            }
        }
        string s3 = "";

        while(pos)
        {
            s3 = (char)(pos % 10 + 48) + s3;
            pos /= 10;
        }
        s2 = add (s2, s3);
    }
    return s2;
}

string cs10_to_csb(string s)
{
    string s2 = "";
    while (s != "0")
    {
        int i = mod_1(s, csb);
        s2 = H[i] + s2;
        s = div_1(s, csb);
    }
    return s2;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        cin >> A >> csa >> csb;
        cout << cs10_to_csb(cs1_to_cs10(A));
        cout << '\n';
    }
    return 0;
}
