#include<stdio.h>
int gcd(int n,int m)
{
	if(n==0)return m;
	if(m==0) return n;
	if(n>=m)return gcd(n%m,m);
	else
		return gcd(m%n,n);
}
int main()
{
	int a,b,c,d,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		a=a*d+b*c;
		b=b*d;
		c=gcd(a,b);
		a=a/c,b=b/c;
		if(b==1)
			printf("%d\n",a);
		else
			printf("%d/%d\n",a,b);
	}
	return 0;
}
