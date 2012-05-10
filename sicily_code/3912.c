#include	<stdio.h>
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int ans;
char s[7][20]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int main()
{
  int t,m,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&d);
		int i=1;
		ans=0;
		for(;i<m;i++)
			ans+=days[i];
		ans+=d+5;
		ans%=7;
		printf("%s\n",s[ans]);
	}
	return 0;
}
