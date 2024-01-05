#include <iostream>
using namespace std;
int main()
{
  int k, l, cnt = 1;
  cin >> k >>l;
  while(cnt*k % 10 != 0 && cnt*k % 10 != l )
  {
    cnt++;
  }
  cout << cnt;
  return 0;
}
