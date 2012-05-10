#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0; i < n; ++i)
	{
	  double x1,y1,x2,y2;
	  cin >> x1 >> y1 >> x2 >> y2;
	  double d = sqrt(pow((x1-x2),2.0) + pow((y1-y2),2.0));
	  cout << fixed << setprecision(2) << d << endl;
	}
}

