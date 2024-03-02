/*
số hoàn hảo:

Np = 6
Np = 28
Np = 496
Np = 8128
Np = 33550336
Np = 8589869056
Np = 137438691328
Np = 2305843008139952128


Công thức Euclid: Np = 2^(p – 1).(2^p – 1)
Công thức trên sẽ cho ra một số hoàn hảo chẵn khi và chỉ khi 2^p − 1 là số nguyên tố (số nguyên tố Mersenne).
các số nguyên tố Mersenne (với các số mũ 2^n-1): 2, 3, 5, 7, 13, 17, 31, 127, 257

nếu p = 2 -> 2^(2-1).(2^2 - 1) = 2.3 = 6
nếu p = 3 -> 2^(3-1).(2^3 - 1) = 4.7 = 28
nếu p = 5 -> 2^(5-1).(2^5 - 1) = 16.31 = 496
nếu p = 7 -> 2^(7-1).(2^7 - 1) = 64.127 = 8128
nếu p = 13 -> 2^(13-1).(2^13 - 1) = 4096.8191 = 33550336
nếu p = 15 -> 2^(17-1).(2^17 - 1) = 65536.131071 = 8589869056
nếu p = 31 -> 2^(31-1).(2^31 - 1) = 1073741824.2147483647 = 2305843008139952128

*/

/*
#include <bits/stdc++.h>
using namespace std;
vector <long long> Mersenne;
long long ans;
int main()
{
  	freopen("NTLBai2.inp", "r", stdin);
    freopen("NTLBai2.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n; cin >> n;
    Mersenne = {2, 3, 5, 7, 13, 17, 31, 61, 127};
    for(int i=Mersenne.size() - 1;i >= 0; --i)
    {
        long long test = (long long)(pow(2, Mersenne[i]-1) * (pow(2, Mersenne[i]) - 1));
        if(test == n)
        {
            ans = test;
            break;
        }
    }
    if(ans == n) cout << "YES";
    else cout << "NO";
    //2^(p – 1).(2^p – 1)
    return 0;
}

*/


#include <bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(long long num)
{
    set<long long> set={6,28,496,8128,33550336,8589869056,137438691328,2305843008139952128};
    return set.find(num)!=set.end();
}

int main()
{
    freopen("NTLBai2.inp", "r", stdin);
    freopen("NTLBai2.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n; cin >> n;
    if(checkPerfectNumber(n)) cout << "YES";
    else cout << "NO";
    return 0;
}
