#include <iostream>
#include <cmath>
using namespace std;
int P(int x) {return x*x;}
struct Node{
	int x, y,z;
	double dis(Node a){
		double ans = sqrt((double)(P(x-a.x))+(double)(P(y-a.y))+(double)(P(z-a.z)));
		return ans;
	}
	Node(int a=0,int b=0,int c=0):x(a),y(b),z(c){}
	Node add(Node a)
	{
		return Node(x+a.x,y+a.y,z+a.z);
	}
}node[9];
double edge;bool ok;
int main()
{
	int t;cin >> t;
	while(t--)
	{
		Node m;
		for(int i=1;i<=8;i++)
		{
			cin >> node[i].x>>node[i].y>>node[i].z;
			m=m.add(node[i]);
		}
		m.x/=8;m.y/=8;m.z/=8;
		double e=m.dis(node[1])/sqrt(3.0),r;
		cin >> node[0].x>>node[0].y>>node[0].z;
		cin >>r;
		if(r+e<=m.dis(node[0]))cout <<"Yes"<<endl;
		else cout <<"No"<<endl;
	}
}
