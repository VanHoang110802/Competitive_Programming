#include<bits/stdc++.h>
using namespace std;
long long n, s = 0;
int main()
{
    cin >> n;
    for(int i=1;i<=sqrt(n); ++i)
    {
        if(n % i == 0) s += 2;
    }
    long long temp = sqrt(n);
    if(temp*temp == n) s -= 1;
    cout << s;
    return 0;
}
