#include <stdio.h>
int m[100][100],n[100][100];
int main()
{
	int a;
	while(scanf("%d",&a)&&a!=0)
	{
		int i,j;
		for(i=0;i<a;i++)
			for(j=0;j<a;j++)
			{
				scanf("%d",&m[i][j]);
			}
		for(i=0;i<a;i++)
			for(j=0;j<a;j++)
			{
				scanf("%d",&n[i][j]);
			}
		for(i=0;i<a;i++)
			for(j=0;j<a;j++)
			{
				n[i][j]+=m[i][j];
			}
		for(i=0;i<a;i++)
		{
			for(j=0;j<a-1;j++)
			{
				printf("%d ",n[i][j]);
			}
			printf("%d\n",n[i][a-1]);
    }
	}
	return 0;
}
