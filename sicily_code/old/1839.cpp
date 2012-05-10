#include <iostream>
#include <iomanip>
using namespace std;

int a,b,n;
double P(int a,int b)
{
	if(a==0) return 0.00;
	if(b==0) return (double)(a%2==1);
    double t = ((double)(a+b))/(a+2*b);
	return t*(1-P(a-1,b)*a/(a+b));
}
int main()
{
	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		cout <<fixed<<setprecision(6);
		cout <<P(a,b)<<endl;
	}
}