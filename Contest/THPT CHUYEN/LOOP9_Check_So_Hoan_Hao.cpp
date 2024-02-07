# include <bits/stdc++.h>
using namespace std;

map<int64_t, int64_t> mp;    // to store prime factors and there frequency

void primeFactors(int64_t n)
{
    // counting the number of 2s that divide n
    while (n%2 == 0)
    {
        mp[2] = mp[2]+1;
        n = n/2;
    }

    int64_t root = sqrt(n);
    // n must be odd at this point.  So we can skip every even numbers next
    for (int64_t i = 3; i <= root; i = i+2)
    {
        // While i divides n, count frequency of i prime factor and divide n
        while (n%i == 0)
        {
            mp[i] = mp[i]+1;
            n = n/i;
        }
    }

    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
    {
        mp[n] = mp[n]+1;
    }
}

int64_t POW(int64_t base, int64_t exp)
{
    long long int result = 1;
    base = base;
    while (exp>0)
    {
        if (exp & 1)
            result = (result*base);
        exp >>= 1;
        base = (base*base);
    }
    return result;
}

int main ()
{
    int64_t num, p, a, sum;

    cin >> num;
    {
        primeFactors(num);
        sum = 1;

        map<int64_t, int64_t> :: iterator i;
        for(i=mp.begin(); i!=mp.end(); i++)
        {
            p = i->first;
            a = i->second;
            sum = sum*((pow(p,a+1)-1)/(p-1));
        }
        if (sum == 2*num) cout << "YES";
        else cout << "NO";
    }

    return 0;
}
