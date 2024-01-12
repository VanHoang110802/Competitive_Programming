/*
Gọi số F(n) là số xâu có độ dài n thỏa mãn đề bài thì:

F(1)=2, F(2)=3, F(3)=5, F(4)=8, F(5)=13,… F(n)=F(n-1) + F(n-2)

*/

#include <iostream>
#include <string>
using namespace std;

long N;
long count_;
string X1, X2, X3;
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

void process(long N)
{
    if(N == 1) cout << 2;
    else if(N == 2) cout << 3;
    else
    {
        X1 = "2";
        X2 = "3";
        X3 = "";
        for (long i = 3; i <= N; i++)
        {
            X3 = add(X1, X2);
            X1 = X2;
            X2 = X3;
        }
    }
    cout << X3 << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        long temp; cin >> temp;
        N = temp;
        process(N);
    }
    return 0;
}
