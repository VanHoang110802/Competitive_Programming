// Số hoán vị của xâu s bằng  length(s) !/ ((số kí tự a)!….(số kí tự z)!)
// Code bi wa

#include <iostream>
#include <string>
using namespace std;

string s;
int d[27], test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
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

void calculate(string s)
{
    int ls = s.length();
    for(int i = 0; i < ls; i++) d[(int)(s[i] - '0')]++;

    string res = "1";
    for(int i = 1; i <= ls; i++) res = multiply_1(res, i);

    for(int i = 0; i < 26; i++)
    {
        if(d[i] > 1)
        {
            for(int j = 2; j <= d[i]; j++)
            {
                res = div_1(res, j);
            }
        }
    }
    cout << res << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        string temp; cin >> temp;
        s = temp;
        calculate(s);
    }
    return 0;
}
