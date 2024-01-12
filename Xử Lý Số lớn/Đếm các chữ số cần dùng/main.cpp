#include <iostream>
#include <string>
using namespace std;

string N;
int d, k;
string ones = "";
string tens = "", tens1 = "";
string res[10];

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
    for(int i = l - 1; i >= 0; i--)
    {
        x = (int)X[i];
        y = (int)Y[i];
        sum = x - y - borrow;
        if(sum < 0)
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

string mul(string X, long b)
{
    long carry = 0, s, lx = X.length();
    string Z = "";
    for (int i = lx - 1; i >= 0; i--)
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

signed main()
{
    cin >> N;
    k = N.length(); // số chữ số của N
    for(int i = 0; i < k; i++) ones += "1"; // tạo các số 1, 11, 111, …
    tens = "1";
    for (int i = 0; i < k - 1; i++) tens = tens + "0"; //tạo 10k-1: số các số có k-1 chữ số
    while(tens != "")
    {  // hạ dần số lượng các chữ số là 10k-1 của các số từ 1 đến N

        d = (int)N[0] - 48; // chữ số hàng cao nhât là d
        N = N.erase(0, 1);  // sau khi bỏ đi chữ số hàng cao nhất N thành N%10k-1
        k--;   // số chữ số của các số còn lại khi đã bỏ đi chữ số hàng cao nhất là k-1
        tens1 = tens; //10k-1
        tens1 = tens1.erase(tens.length() - 1, 1); // 10k-2
        for(int i = 0; i < 10; i++) res[i] = add(res[i],  mul(mul(tens1, k), d)); // số chữ số i thêm (10k-2(k-1)).d
        for(int i = 0; i < d; i++) res[i] = add(res[i], tens);    // các chữ số nhỏ hơn d còn thêm 10k-1
        res[d] = add(add(res[d], N), "1"); // riêng chữ d thêm N%10k-1 + 1
        tens = tens1;    // phục vụ vòng lặp sau
    }
    res[0] = sub(res[0], ones);
    for(int i = 0; i < 10; i++) cout << res[i] << '\n';
    return 0;

}
