#include<iostream>
using namespace std;

int main()
{
    long int a,b,c,d;
    int t; cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        cout << (a<b)+(a<c)+(a<d) << '\n';
    }
    return 0;
}
