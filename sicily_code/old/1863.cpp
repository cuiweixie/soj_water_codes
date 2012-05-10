#include <iostream>
#include <cmath>
using namespace std;
unsigned int n;
int m;
double cal(int n)
{
	if(n<13) return 1/sqrt(5.0)*(pow(((1+sqrt(5.0))/2),(double)n)-pow(((1-sqrt(5.0))/2),(double)n));
	if(n%2==0)
		return pow(fmod(cal(n/2),m),2.0);
	else
		return pow(fmod(cal(n/2),m),2.0)+cal(n-2);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		cout <<(int)cal(n)<<endl;
	}
}