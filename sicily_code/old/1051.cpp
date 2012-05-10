#include <iostream>
#include <iomanip>
using namespace std;

const double Pi = 3.1415927;

double get_dis(double d,double r)
{
	double dis = Pi*d*r;
	dis = dis/(5280.00*12);
	return dis;
}
double get_mph(double dis,double time)
{
	time/=3600.00;
	return dis/time;
}

int main()
{
	double d,r,t;int i=1;
	while(cin >>d >>r >>t)
	{
		if(r==0) return 0;
		double dis=get_dis(d,r);
		double mph=get_mph(dis,t);
		cout <<"Trip #"<<i<<": ";
		cout <<fixed<<setprecision(2);
		cout << dis <<" "<<mph<<endl;
		i++;
	}
}
	