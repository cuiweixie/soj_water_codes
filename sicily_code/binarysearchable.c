#include <stdio.h>
int a[100],n;
int count()
{
	int i,j;
	int ret=0;
	for(i=0;i<n;i++)
	{
		int ok=1;
		for(j=i-1;j>=0;j--)
			if(a[i]<a[j]){
				ok=0;
				break;
			}
		if(ok)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				ok=0;
				break;
			}
		ret+=ok;
	}
	return ret;
}
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		printf("%d\n",count());
	}
	return 0;
}
