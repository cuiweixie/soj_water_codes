#include <stdio.h>
int t,n,ans[1001][10];
int main()
{
	ans[1][0]=0,ans[1][1]=1;
	int i=2;
	for(;i<1001;i++)
	{
		int j;
		for(j=0;j<10;j++)
		{
			ans[i][j]=ans[i-1][j];
		}
	  int tmp=i;
		while(tmp!=0)
		{
			ans[i][tmp%10]++;
			tmp/=10;
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int i;
		for(i=0;i<9;i++)
			printf("%d ",ans[n][i]);
		printf("%d\n",ans[n][9]);
	}
	return 0;
}
