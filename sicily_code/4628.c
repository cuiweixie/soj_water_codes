
#include	<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		int i,j;
		for(i=0;i<b;i++)
		{
			for(j=0;j<a;j++)
			{
				if(i==0||i==b-1||j==0||j==a-1)printf("*");
				else 
					printf(" ");
			}
			printf("\n");
		}
			printf("\n");
	}
	return 0;
}
