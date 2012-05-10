#include <iostream>
#include <string>
#include <stack>
using namespace std;
string str[1000];
int op[1000];
stack<int> sta;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> str[i];
	    if(str[i]=="PUSH"||str[i]=="IFZERO")
			cin >> op[i];
	}
	int reg;
	int instruct=0;
	while(str[instruct]!="DONE")
	{
		if(str[instruct]=="PUSH")
		{
			sta.push(op[instruct]);
			instruct++;
		}
		if(str[instruct]=="STORE")
		{
			int temp = sta.top();
			sta.pop();
			reg = temp;
			instruct++;
		}
		if(str[instruct]=="LOAD")
		{
			sta.push(reg);
			instruct++;
		}
		if(str[instruct]=="PLUS")
		{
			int a=sta.top();
			sta.pop();
			int b= sta.top();
			sta.pop();
			sta.push(a+b);
			instruct++;
		}
		if(str[instruct]=="TIMES")
		{
			int a=sta.top();
			sta.pop();
			int b= sta.top();
			sta.pop();
			sta.push(a*b);
			instruct++;
		}
		if(str[instruct]=="IFZERO")
		{
			int temp = sta.top();
			sta.pop();
			if(temp==0)
				instruct=op[instruct];
			else
				instruct++;
		}
	}
	cout <<sta.top() <<endl;
}

