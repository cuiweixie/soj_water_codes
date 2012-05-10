#include <iostream>
using namespace std;

int gcd(int n,int m)
{
	if(n % m == 0)
		return m;
	else 
	       return gcd(m,n%m);
}

int lcm(int n,int m)
{
	return n*m/gcd(n,m);
}

int n;
int a[251][251];
void initialized()
{
	for(int i=0;i<5;i++) a[i]= i;
	int max;
	for(int n=5;n<251;n++)
	{
		max = 0;
		for(int i=1;i<=n/2;i++)
		{
			int L = lcm(a[n-i],a[i]);
			int m = lcm(n-i,i);
			m = (m>L)?m:L;
			max = (max > m)?max:m;
		}
		a[n] = max;
	}
}

int main()
{   
	initialized();
	while(cin >> n)
	{
		if(n == 0) return 0;
		cout << a[n] << endl;
	}
}




