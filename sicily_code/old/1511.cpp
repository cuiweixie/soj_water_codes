#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
double a;
string str;
int n;
int main()
{
	cin >> n;
for(int i=1;i<=n;i++)
	{
		cin >> a >> str;
		cout << fixed<<setprecision(4);
		if(str=="kg")
		{
			a*=2.2046;
		  cout << i <<" "<< a << " lb"<<endl;
		}
		else if(str=="lb")
		{
			a*=0.4536;
			 cout << i <<" "<< a << " kg"<<endl;
		}
		else if(str=="l")
		{
			a*=0.2642;
			cout << i <<" "<< a << " g"<<endl;
		}
		else
		{
			a*=3.7854;
			cout << i <<" "<< a << " l"<<endl;
		}
}
}