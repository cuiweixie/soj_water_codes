#include <stdio.h>
#define N 1000000
int a[N],n,m;
long long int get_wood(int h)
{
	long long int ret=0;
	long long int i;
	for(i=0;i<n;i++)
		if(a[i]>h)
			ret+=a[i]-h;
	return ret;
}
long long int bs(int low,int high)
{
  long long int mid=(low+high)>>1;
	long long int w=get_wood(mid);
	if(w==m)
		return mid;
	if(low==high)return low;
	if(w<m)
		return bs(low,mid);
	else
	{
		if(mid==low)
		{
			int w1=get_wood(mid+1);
			if(w1<m)
				return mid;
			else
				return mid+1;
		}
		return bs(mid,high);
	}
}
int main()
{
	scanf("%d%d",&n,&m);
	long long int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
printf("%lld\n",bs(0,1000000000));
	return 0;
}
