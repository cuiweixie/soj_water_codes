
#include	<stdio.h>
int n,m;
float sum;
int d;
int main()
{
	scanf("%d%d",&n,&m);
	sum=0,d=0;
	int i,j;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<m;j++)
		{
			float score;
			scanf("%f",&score);
			sum+=score;
		}
		sum=sum/m;
		d+=(sum<60);
		printf("%.2f\n",sum);
	}
	printf("%d\n",d);
			return 0;
}
