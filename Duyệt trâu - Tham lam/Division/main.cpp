#include <iostream>
using namespace std;
int t;
int main()
{
 cin >> t;
 while(t--)
 {
  int rating;
  cin >> rating;
  cout << "Division " << 1+(rating<1900)+(rating<1600)+(rating<1400) << '\n';
 }
 return 0;
}
