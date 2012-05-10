#include <iostream>
using namespace std;

struct Node{
	int cal;
	char data;
	Node(int ca=0, char a = '*'){
	    cal =ca;
		data=a;
	}
	int getleft(){ return cal/1000;}
	int getright(){return cal%1000;}
}node[10001];

void pre_order(int root)
{
	if(root==0) return;
	cout <<node[root].data;
	if(node[root].getleft()!=0)
	{
		pre_order(node[root].getleft());
	}
	if(node[root].getright()!=0)

	{
		pre_order(node[root].getright());
	}
}

int main()
{
	int n;
	while(cin >> n)
	{
		Node p;
		for(int i=0;i<1001;i++)node[i]=p;
		int index,left,right;
		char ch;
		for(int i=0;i<n;i++)
		{
			cin >> index>>ch>>left>> right;
			node[index].data=left*1000+right;
			node[index].data=ch;
		}
		int root;
		for(int i=1;i<=1000;i++)
			if(node[i].cal==0)
			{
				root = i;
				break;
			}
			pre_order(root);
			cout << endl;
	}
}