#include <iostream>
using namespace std;
struct Node{
	long long int s,e;
}node;
bool cal(long long int &n)
{
	node.e=n-1,node.s=n%9==0?n/9:n/9+1;
	bool sign=1;
	while(1)
	{
		if(node.s==1) break;
		if(sign)
		{
			sign=0;
			node.s=node.s%2==0?node.s/2:node.s/2+1;
		    node.e=node.e%9==0?node.e/9:node.s/9+1;
		}
		else
		{
			node.e=node.e-1,node.s=node.s%9==0?node.s/9:node.s/9+1;
			sign=1;
		}
	}
	return sign;
}
int main()
{
	long long int n;
	while(cin >> n)
	{
		if(cal(n))cout <<"Nic wins."<<endl;
		else 
			cout << "Susan wins."<<endl;
	}
}
