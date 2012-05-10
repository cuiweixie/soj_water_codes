#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
struct Point{
	double x,y,z;
	double dis;
	void get_dis(Point &p)
	{
		dis = sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y)+(z-p.z)*(z-p.z));
	}
}node[1300];
Point p;
int n;
bool cmp(Point a,Point b)
{
	return a.dis<b.dis;
}
int main()
{
	int test; cin >> test;
	while(test--)
	{
		cin >> p.x>>p.y>>p.z;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> node[i].x>>node[i].y>>node[i].z;
			node[i].get_dis(p);
		}
	    stable_sort(node,node+n,cmp);
		cout << fixed<<setprecision(2);
		cout <<"("<<node[0].x<<", "<<node[0].y<<", "<<node[0].z<<") "<<node[0].dis<<endl;
	}
}
		