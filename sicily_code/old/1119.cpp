#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a,b,n;
  int i,m;
  while(cin >> m&&m!=0)
  {
	  a=(m-1960)/10+2;
	  b=pow(2,a);
	  for(n=0,i=2;n<=b;i++)
		  n+=log10((double)i)/log10((double)2);
	  cout << i-2 <<endl;
  }
}


	





