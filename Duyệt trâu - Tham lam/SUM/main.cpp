#include <iostream>
#include <algorithm>
using namespace std;

int tc;
int a,b,c;
int arr[3];
int s;

int main()
{
    cin >> tc;
    while(tc--)
    {
        int n = 3;
        for(int i=0;i<n;++i)
        {
            cin >> arr[i];
        }
        for(int i=0;i<n-1;++i)
        {
            if(arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i+1]);
            }
        }
        if(arr[0] + arr[1] == arr[2])
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
