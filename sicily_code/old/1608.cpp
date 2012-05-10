#include <iostream>
using namespace std;
int c[10];
void cal(int n)
{
	while(n!=0)
	{
		c[n%10]++;
		n=n/10;
	}
}

int main()
{
	int testcase,num;
	cin >> testcase;
	while(testcase--)
	{
		for(int i=0;i<10;i++) c[i]=0;
		cin >> num;
		for(int i=1;i<=num;i++)
			cal(i);
		for(int i=0;i<9;i++) cout <<c[i] <<" ";
		cout << c[9] << endl;
	}
}
		