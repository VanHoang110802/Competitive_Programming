#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n, k;
string s;
int main()
{
		int x,y,i;		
	  string s;
		cin>>x>>y>>s;			
    while(y--)	{
		for(i=0;i<s.size()-1;i++){	
      if(s[i]=='B'&&s[i+1]=='G')
	    {
        swap(s[i],s[i+1]),i++;
      }
    }
}	
cout<<s;
return 0;
}
