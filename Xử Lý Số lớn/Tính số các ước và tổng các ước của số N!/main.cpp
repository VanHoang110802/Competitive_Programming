#include <iostream>
#include <string>
using namespace std;

const int MAXN = 101;
long N;
int test;
long long A[MAXN];

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

string multiply_1(string X, long b)
{
    long carry = 0, s, lx = X.length();
    string Z = "";
    for(int i= lx-1; i>=0; i--)
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
    while((Z.length() > 1) && (Z[0] == '0')) Z.erase(0, 1);
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
        for (int j=0; j<m; j++) tmp = tmp + "0";
        Z = add(tmp, Z);
    }
    return Z;
}

string chuyen(long x)
{
    string Z = "";
    while (x > 0)
    {
        Z = char(x % 10 + 48) + Z;
        x /= 10;
    }
    return Z;
}

void analyse(long i)
{
    long ts = 2;
    while (i != 1)
    {
        while (i % ts == 0)
        {
            A[ts]++;
            i /= ts;
        }
        ts++;
    }
}

void process()
{
    for (long i = 2; i <= N; i++)
        analyse(i);
}

void calculate1()
{
    string res1 = "";
    res1 = res1 + "1";
    for(long i = 2; i <= MAXN; i++)
        if (A[i] > 0)
        {
            string tmp = chuyen(A[i]);
            tmp = add(tmp, "1");
            res1 = multiply(res1, tmp);
        }
    cout << res1 << '\n';
}

void calculate3()
{
    string res3 = ""; res3 = res3 + "1";
    for(long i = 2; i <= MAXN; i++)
        if(A[i] > 0)
        {
            string tmp0 = ""; tmp0 = tmp0 + "0";
            string tmp = chuyen(i);
            string tmp1 = "";
            tmp1 = tmp1 + "1";
            for (int j= 1; j <= A[i]; j++)
            {
                tmp1 = multiply(tmp1, tmp);
                tmp0 = add(tmp0,tmp1);
            }
            tmp0 = add(tmp0, "1");
            res3 = multiply(res3, tmp0);
        }
    cout << res3 << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        cin >> N;
        process();
        calculate1();
        calculate3();
        cout << '\n';
    }
    return 0;
}
