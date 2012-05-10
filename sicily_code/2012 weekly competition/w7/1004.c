#include <iostream>
#include <algorithm>
using namespace std;
#define N 300000
double m[N];
int n;
double x[N];
double cal_x(double mi,double mj,double x)
{
	return x+mi/(mi+mj);
}
int main()
{
	cin >>n;
	for(int i=0;i<n;i++)
		cin>>m[i];
}

