#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string A, B;

long count_;
int la, lb, test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

int biger(string X, string Y)
{
    //X >= Y tra ve 1
     int lx = X.length();
     int ly = Y.length();
     int l = (lx > ly) ? lx : ly;
     while(X.length() < l) X = '0' + X;
     while(Y.length() < l) Y = '0' + Y;
     if(X < Y) return 0;
     return 1;

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

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        cin >> A >> B;
        la = A.length();
        lb = B.length();
        string X1 = "0", X2 = "1", X3 = "";
        if(biger(X1, A)) count_++;
        if(biger(X2, A)) count_++;
        X3 = add(X1, X2);
        while(!biger(X3, A))
        {
            X1 = X2;
            X2 = X3;
            X3 = add(X1, X2);
        }
        while (smaller(X3, B))
        {
            count_++;
            X1 = X2;
            X2 = X3;
            X3 = add(X1, X2);
        }
        cout << count_ << '\n';
    }
    return 0;
}
