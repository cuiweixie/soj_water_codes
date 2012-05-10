#include <stdio.h>
int a[]={0,2,3,5,7,11,13,17,19,23,29,\
31,37,41,43,47,53,59,61,67,71,\
73,79,83,89,97,101,103,107,109,113,\
127,131,137,139,149,151,157,163,167,173,\
179,181,191,193,197,199,211,223,227,229,\
233,239,241};
	int len=sizeof(a)/sizeof(int);
	int dp[54][251];
void figure()
{
	int i,j;
	for(i=0;i<54;i++)
		for(j=0;j<251;j++)
			dp[i][j]=1;
	for(i=1;i<len;i++)
	{
		for(j=a[i]-1;j>0;j--)dp[i][j]=dp[i-1][j];
		for(j=a[i];j<251;j++)
		{
			int tmp=a[i]*dp[i-1][j-a[i]];
			dp[i][j]=tmp>dp[i-1][j]?tmp:dp[i-1][j];
		}
	}
}
int main()
{
  figure();
	int n;
	while(scanf("%d",&n))
	{
		if(n==0)return 0;
		int ans=dp[53][n];
		if(ans<n)ans=n;
		printf("%d\n",ans);
	}
	return 0;
}
