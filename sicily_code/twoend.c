#include <stdio.h>
#include <string.h>
int a[1000];
int dp[1000][1000]={{0}},n;
int main()
{
	int t=0;
	while(scanf("%d",&n))
	{
		t++;
		if(n==0) return 0;
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			dp[i][i]=a[i];
		}
		int len;
		for(len=1;len<n;len++)
			for(i=0;i+len<n;i++)
			{
			  int j=i+len;
				//choose left
				int ml,mr;
				if(a[i+1]>=a[j])
				{
					ml=dp[i+2][j]+a[i]-a[i+1];
				}
				else
				{
					ml=dp[i+1][j-1]+a[i]-a[j];
				}
				if(a[i]>=a[j-1])
				{
					mr=dp[i+1][j-1]+a[j]-a[i];
				}
				else
				{
					mr=dp[i][j-2]+a[j]-a[j-1];
				}
				dp[i][j]=ml>mr?ml:mr;
			}
		printf("In game %d, the greedy strategy might lose by as many as %d points.\n",t,dp[0][n-1]);
	}
	return 0;
}
