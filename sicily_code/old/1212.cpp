#include <iostream>
#include <cstring>
using namespace std;
int a[601],p[4]={1,1,1,1},b[601];
int n;
int cal(int n)
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));a[0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=3*i;j>=3;j--)
		{
	            a[j]=a[j]+a[j-1]+a[j-2]+a[j-3];
		}
		a[2]=a[2]+a[1]+
	}
	return a[2*n-2];
}