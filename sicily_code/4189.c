#include <stdio.h>
#include <stdlib.h>
int num[200000],n;
int cmp(const void *a,const void *b)
{
	return *(int *)a<*(int *)b;
}
int main()
{
	while(scanf("%d",&n))
	{
		if(n==0)
			return 0;
		int i=0;
		for(;i<n;i++)
		{
		  scanf("%d",&num[i]);
		}
		qsort(num,n,4,cmp);
		int ans=1;
		for(i=1;i<n;i++)
		{
			if(num[i]!=num[i-1])ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
