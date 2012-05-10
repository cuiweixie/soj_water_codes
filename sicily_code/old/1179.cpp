#include <iostream>
#include <iomanip>
using namespace std;
struct Node{
	float x,y;
};
Node node[100];
int n;
float get_triangle_area(Node A,Node B,Node C)
{
	float area;
	area=(A.x-C.x)*B.y+(B.x-A.x)*C.y+(C.x-B.x)*A.y;
	area=area/2;
    return area;
}

int main()
{
	Node p; p.x=0;p.y=0;
	while(cin >> n)
	{
		if(n<3)return 0;
		for(int i=0;i<n;i++)cin >> node[i].x>>node[i].y; 
		float v;cin >> v;
		float area=0;
		for(int i=0;i<n-1;i++)
		{
			area=area+get_triangle_area(p,node[i],node[i+1]);
		}
		area+=get_triangle_area(p,node[n-1],node[0]);
		if(area<0) area =-1.0*area;
		float ans = v/area;
		cout <<"BAR LENGTH: ";
		cout <<fixed<<setprecision(2) << ans<<endl;
	}
}