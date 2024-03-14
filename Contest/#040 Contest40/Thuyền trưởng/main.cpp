#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

#define int long long
const int MAX = 1e7 + 7;
#define check(n) (prime[n >> 6] & (1 << ((n & 63) >> 1)))
#define set(n) prime[n >> 6] |= (1 << ((n & 63) >> 1))
int prime[MAX >> 6];
int n;
int a, label[50];

void eratos()
{
    for(int i = 3; i * i <= MAX; i += 2)
    {
        if(!check(i))
        {
            int t = 2 * i;
            for(int j = i * i; j <= MAX; j += t)
            {
                set(j);
            }
        }
    }
}

bool checkprime(int y)
{
    if((y == 1) || ((y > 2) && (!(y % 2))) || ((y % 2) && check(y))) return false;
    return true;
}

int check_label(int m)
{
    string s, tmp;
    stringstream stream;
    stream << m;
    s = stream.str();
    int tam = s.find('0');
    if(tam > 0) return 4;//neu id chua so 0
    //Bo lan luot cac so ben trai va kiem tra
    bool f1 = true;
    for(int i = 1; i < s.length(); ++i)
    {
        tmp = s.substr(i);//tao xau con khi bo i ky tu trai
        int x = atol(tmp.c_str());
        if(!checkprime(x))
        {
            f1 = false;
            break;
        }
    }
    //Bo lan luot cac so ben phai va kiem tra
    bool f2 = true;
    for(int i = 1; i < s.length(); ++i)
    {
        tmp = s.substr(0, s.length() - i);//tao xau con khi bo i ky tu phai
        int x = atol(tmp.c_str());
        if(!checkprime(x))
        {
            f2 = false;
            break;
        }
    }
    if(f1 && f2) return 1;//central
    else if(f1) return 2;//left
    else if(f2) return 3;//right
    else return 4;//dead

}

void process()
{
    eratos();
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        if(!checkprime(a)) label[i] = 4;
        else label[i] = check_label(a);
    }
    //in ket qua
    for(int i = 0; i < n; ++i)
    {
        if (label[i] == 1) cout << "CENTRAL";
        else if(label[i] == 2) cout << "LEFT";
        else if(label[i] == 3) cout << "RIGHT";
        else cout << "DEAD";
        cout << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    process();
    return 0;
}
