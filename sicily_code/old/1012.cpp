#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int n;
double x[11],y;
int main()
{
	int c;cin >>c;

	for(int i=1;i<=c;i++)
	{
		cin >> n;
		for(int i=0;i<n;i++)cin >> x[i];
		sort(x,x+n);
		y=1.0;
		for(int i=0;i<n-1;i++)
			y=y+sqrt(4-(x[i+1]-x[i])*(x[i+1]-x[i])/4);
		cout << fixed << setprecision(4);
		cout <<i<<": "<< (x[0]+x[n-1])/2<<" "<< y<<endl;
	}
}