#include <iostream>
#include <iomanip>
using namespace std;
struct Node{
	int x,y;
};
double area(Node a,Node b)
{
	double ans = ((double)(a.y+b.y)*(b.x-a.x))/2;
	return ans;
}
Node _left,_right;
double ans;

int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n; cin >> n; ans =0;
		cin >> _left.x >>_left.y;
		for(int i=1;i<n;i++)
		{
			cin >> _right.x >> _right.y;
			ans+=area(_left,_right);
			_left = _right;
		}
		cout <<fixed<<setprecision(1)<< ans << endl;
	}
}

