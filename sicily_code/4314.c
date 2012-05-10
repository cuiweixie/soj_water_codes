#include <stdio.h>
int gcd(int a,int b)
{
	if(a==0)return b;
	if(b==0)return a;
	if(a>b)return gcd(a%b,b);
	else return gcd(b%a,a);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(gcd(a,b)==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
