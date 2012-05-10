
#include	<stdio.h>
int main()
{
	int t,a,b,c,ans;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d%d%d",&a,&b,&c);
	for(ans=10;ans<=101;ans++)
	{
		if(ans%3==a&&ans%5==b&&ans%7==c)
			break;
	}
	if(ans<101)
		printf("%d",ans);
	else
		printf("No answer");
	printf("\n");
	}
	return 0;
}
