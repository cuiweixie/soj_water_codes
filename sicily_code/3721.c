#include	<stdio.h>
int main()
{
	int n;
	int a[10][10],b[10][10],c[10][10];
	int i,j;
	while(scanf("%d",&n)!=EOF)
	{
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);		  
		}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);		  
		}

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			int k=0;
			for(k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
			{
				printf("%d ",c[i][j]);
			}
		printf("%d\n",c[i][n-1]);
	}
	}
 	return 0;
}
