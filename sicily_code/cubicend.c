#include <stdio.h>
long long int p10[12];
int t,len;
long long int n;
long long int mod(long long int a,long long int b)
{
	long long int ret=1,l=a/p10[5],r=a%p10[5];
	ret=3*l*r*r;
	ret%=b;
	ret*=p10[5];
	r=r*r*r;
	r=r%b;
	ret=(ret+r)%b;
	return ret;
}
long long int a[10];
long long int ans=1;
void init()
{
	p10[0]=1;
	int i;
	for(i=1;i<12;i++)p10[i]=p10[i-1]*10;
}
void figure()
{
	ans=0;
	for(len=1;len<12;len++)if(p10[len]>n)break;
	int i=0;
	for(i=0;i<len;i++)
	{
		int j;
		for(j=1;j<10;j++)
		{
			long long int tmp=mod(p10[i]*j+ans,p10[i+1]);
			if(tmp==n%p10[i+1])
			{
				ans=p10[i]*j+ans;
				break;
			}
		}
	}
 printf("%lld\n",ans);
}
int main()
{
	scanf("%d",&t);
	init();
	while(t--)
	{
		scanf("%lld",&n);
		figure();
	}
	return 0;
}
