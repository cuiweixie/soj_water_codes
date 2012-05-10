#include <iostream>
using namespace std;
int testcase;
int money;
int n;
int a,b;
int main()
{
	cin >> testcase;
	while(testcase--)
	{
		cin>>money>>n;
		while(n--)
		{
			cin >> a >> b;
			money-=a*b;
		}
		if(money<0) cout << "Not enough"<<endl;
		else
		cout << money <<endl;
	}
}
