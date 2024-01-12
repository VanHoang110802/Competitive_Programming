```
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string N, B;
int test;
long long count_;
long long lS, csb = 3, csa = 3;
string H = "0123456789ABCDEF";

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

string div_1(string X, long long b)
{
    long long s = 0, hold = 0, lx = X.length();
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

long mod_1(string X, long long b)
{
    long long hold = 0, lx = X.length();
    for (long i = 0; i < lx; i++) hold = ((int)X[i] - 48 + hold * 10) % b;
    return hold;
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

string add(string X, string Y)
{
    string Z = "";
    int lx = X.length();
    int ly = Y.length();
    int l = (lx > ly) ? lx : ly;
    int carry = 0;
    long long x, y, sum;
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

string multiply_1(string X, long long b)
{
    long long carry = 0, s, lx = X.length();
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

string sub(string X, string Y)
{
    string Z = "";
    int lx = X.length();
    int ly = Y.length();
    int l = (lx > ly) ? lx : ly;
    int borrow = 0;
    long long x, y, sum;
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
        Z = (char)(sum%10 + 48) + Z;
    }
    while((Z.length() > 1) && (Z[0] == '0')) Z.erase(0, 1);
    return Z;
}

string cs1_to_cs10(string s)
{
    string s2 = "";
    for (int i = 0; i < s.length(); i++)
    {
        s2 = multiply_1(s2, csa);
        int pos = 0;
        for(int p = 0; p < 16; p++)
        {
            if (s[i]==H[p])
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

void process2()
{
    string res = "", tmp = "";
    res = cs10_to_csb(N);   // Bieu dien N duoi he co so 3
    string luu_res = res;   // Luu bieu dien nay truoc khi bien doi
    res = "0" + res;
    long long l = res.length();
    long long nho = 0;
    //Bien doi tang them toi thieu de cac bit la 1
    for(int i = l - 1; i >= 0; i--)
    {
        // Bien doi: de cac bit con la 1
        long long c = (int)(res[i]) - 48 + nho;
        if (c > 1)
        {
            // 2 , 3 thi thanh 1, co nho 1 sang bit cao hon
            res[i] = char(48);
            nho = 1;
        }
        if (c == 1)
        {
            // sau khi cong v?i nho la 1 thi ghi nhan la 1
            res[i] = char(49);
            nho = 0;
        }
    }

    // Bay gio res bieu dien tong cac qua can ben dia khong co vat
    string quacan = "1";
    //cout << “Dia can khong co vat, dat cac qua can sau : ” ;
    for(int i = res.length() - 1; i >= 0; i--)
    {
        if((int)res[i] - 48 > 0) cout << quacan << ' ';
        quacan = multiply_1(quacan, 3);
    }
    cout << '\n';
    // Tim luong tang them
    string kq1 = cs1_to_cs10(luu_res);
    string kq2 = cs1_to_cs10(res);
    string res0 = sub(kq2, kq1);

    res = cs10_to_csb(res0); // Bieu dien luong tang them
    // Luong tang thêm la các qua can ben dia co vat
    quacan = "1";
    bool them = false;
    //cout << “\nDia can co vat, them cac qua can sau : ” ;
    for(int i = res.length() - 1; i >= 0; i--)
    {
        if((int)res[i] - 48 > 0)
        {
            cout << quacan << ' ';
            them = true;
        }
        quacan = multiply_1(quacan, 3);
    }
    if(them == false) cout << 0;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        string temp; cin >> temp;
        N = temp;// Cho s? A trong h? c? s? a, chuy?n nó sang h? c? s? b
        process2();
        cout << '\n';
    }
    return 0;
}
