#include <stdio.h>
struct record{
	int a[250];
	int i;
};
struct record a[251]={{{1},1}};
int gcd(int a,int b)
{
	if(a==0)return b;
	if(b==0)return a;
	if(a>=b)return gcd(a%b,b);
	else return gcd(b%a,a);
}
void add_one(struct record *p,int nn)
{
   int i;
	 for(i=0;i<p->i;i++)
	 {
		 if(p->a[i]==nn)return;
	 }
	 p->a[(p->i)++]=nn;
}
int main()
{
	int i;
	for(i=2;i<250;i++)
	{
    int max=i;
		int j;
		for(j=i-1;j>0;j--)
		{
			int cc;
      for(cc=0;cc<a[j].i;cc++)
			{
		a[i]=max;
	}
	int n;
	for(i=1;i<20;i++)
		printf("%d ",a[i]);
	printf("\n");
	while(scanf("%d",&n))
	{
		if(n==0)
			return 0;
		printf("%d\n",a[n]);
	}
	return 0;
}
