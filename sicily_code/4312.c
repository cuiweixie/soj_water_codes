#include <stdio.h>
int reverse(int a)
{
	int b=0;
	while(a!=0)
	{
		b=b*10+a%10;
		a=a/10;
	}
	return b;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",reverse(a)+reverse(b));
	}
	return 0;
}
