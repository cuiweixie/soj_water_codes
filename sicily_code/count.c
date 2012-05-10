#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100000
int arr[N];
int t,n,q,a,b;
int comp(const void * a,const void * b)
{
	 return (*(int *)a)-(*(int *)b);
}
int count(int l,int r)
{
	if(b<arr[l])return 0;
	if(a>arr[r])return 0;
	if(l==r) return arr[l]>=a&&arr[l]<=b;
	if(a<=arr[l]&&b>=arr[r])
		return r-l+1;
	int mid=(l+r)>>1;
	return count(l,mid)+count(mid+1,r);
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int i;
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		qsort(arr,n,sizeof(int),comp);
		scanf("%d",&q);
		while(q--)
		{
			scanf("%d%d",&a,&b);
			printf("%d\n",count(0,n-1));
		}
	}
	return 0;
}
