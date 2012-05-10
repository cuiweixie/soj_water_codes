#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k,n;
	while(cin >> k >> n)
	{
		int count(0);
		int out(0);
		while(n)
		{
		   if(n%2 ==1)
			   out+=pow((double)k,(double)count);
		   n/=2;
		   count++;
		}
		cout << out << endl;
	}
}
			
		
