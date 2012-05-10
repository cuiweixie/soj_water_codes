#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double PI=3.1415926535897932384626433832795;
double r;double r2;
int main()
{
	int t;cin >> t;
	while(t--)
	{
		cin >> r;r2=r*r;
		cout <<fixed<<setprecision(4);
		cout << PI*r2<<" "<<2*PI*r <<endl;
		cout << 4*r2 <<" "<<8*r <<" "<<sqrt(2.0)*2*r << endl;
		cout <<2*PI*r2 <<" "<<sqrt(2.0)*r*2*PI<<endl;
		cout <<6*sqrt(3.0)*r2<<" "<<36/sqrt(6.0)*r<<endl;
	}
}