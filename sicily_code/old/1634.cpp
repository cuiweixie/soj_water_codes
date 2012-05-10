#include <iostream>
using namespace std;

int a,b,c;
int combination(int n,int m)
{
	int ans =1;if(n==0||m==0||n==m) return 1;
	for(int i=1;i<=m;i++)
		ans=ans*(n-i+1)/i;
	return ans;
}

int main()
{
	while(cin >> a >> b)
	{
		if(a==-1&&b==-1)return 0;
		c = combination(a+b,b);
		if(a+b==c)
			cout <<a<<"+"<<b<<"="<<c<<endl;
		else
			cout <<a<<"+"<<b<<"!="<<c<<endl;
	}
}