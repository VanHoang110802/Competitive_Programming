#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int x;
string n, s;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> x >> s;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] >= '0' && s[i] <= '9')
            n += s[i];
    }
    int k = n.size() - x;
    stack<int> digits;
    for (long i = 0; i < n.length(); i++)
    {
        int tmp =  n[i] - 0;
        if (digits.empty()) digits.push(tmp);
        else 
        {
            while (!digits.empty() && tmp < digits.top() && k > 0) 
            {
                digits.pop();
                k--;
            }
            digits.push(tmp);
        }
    }
    while (k > 0 && !digits.empty()) 
    {
        digits.pop();
        k--;
    }
    vector<char> chars;
    while (!digits.empty()) 
    {
        int tmp = digits.top();
        digits.pop();
        chars.push_back(tmp);
    }
    for (long i = chars.size() - 1; i >= 0; i--) cout << chars[i];
    return 0;
}
