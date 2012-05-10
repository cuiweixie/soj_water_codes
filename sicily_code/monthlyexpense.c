#include <stdio.h>
#define N 100000
long long int a[N],n,m;
long long int check(long long int per)
{
	long long int cc=0;
	long long int sum=0;
	long long int i=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>per)return m+1;
		if(sum+a[i]>per)
		{
			cc++;
			sum=a[i];
		}
		else 
			sum+=a[i];
	}
		cc++;
	return cc;
}
long long int bs(long long int low,long long int high)
{
	if(low==high) return low;
	long long int mid=low+(high-low)/2;
	long long int tmp=check(mid);
	if(tmp<=m)
	 return bs(low,mid);
	else
	{
		return bs(mid+1,high);
	}
}
int main()
{
	scanf("%lld%lld",&n,&m);
	long long int i;
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
#define MAX 0xffffffff
	printf("%lld\n",bs(0,MAX));
	return 0;
}
