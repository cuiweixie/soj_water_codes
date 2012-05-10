#include <iostream>
#include <cmath>
using namespace std;

int gcd,lcm;
int Gcd(int a,int b)
{
	return b?Gcd(b,a%b):a;
}
void done()
{
	int a_b= lcm/gcd;
	int a,b;
	for(int i=sqrt((double)a_b);i>=1;i--)
		if(a_b%i==0)
		{
			a=i;
			b=a_b/a;
			if(Gcd(b,a)==1)
			break;
		}
	a = a*gcd;
	b= b*gcd;
	cout <<b-a <<" " << a <<" " << b << endl;
}
int main()
{
	while(cin >> gcd >> lcm&&gcd!=0&&lcm!=0)
		done();
}
