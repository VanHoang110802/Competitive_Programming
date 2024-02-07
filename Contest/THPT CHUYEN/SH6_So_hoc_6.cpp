#include <bits/stdc++.h>
using namespace std;

vector <long long> F;

bool iSInt(double x)
{
    return (x == (long long)x);
}

long long Fibo(long long n)
{
    double x = (pow(1*1LL + sqrt(5*1LL), n) - pow(1*1LL - sqrt(5*1LL), n)) / (pow(2*1LL, n)*sqrt(5*1LL));
    if(!iSInt(x)) x++;
    return x;
}

bool KiemTraNguyenTo(long long n)
{
	if(n < 2)
    {
		return false;
	}
	else
	{
		if(n!= 2 && n % 2 == 0)
		{
			return false;
		}
		for(long long i=3;i*i<=n;i+=2)
		{
			if(n%i == 0)
			{
				return false;
			}
		}
	}
	return true;
}

void Sinh()
{
    for(long long i=1;i<=87;++i)
    {
        //cout << i << " - " << Fibo(i) << '\n';
        F.push_back(Fibo(i));
    }
}

int main()
{
    Sinh();
    long long n; cin >> n;
    for(int i=F.size()-1;i>=0; --i)
    {
         if(KiemTraNguyenTo(F[i]))
         {
            if(F[i] < n)
            {
                cout << F[i] << '\n';
                break;
            }
         }
    }
    return 0;
}
