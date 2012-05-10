
#include	<stdio.h>
int n,ans;
int main()
{
 scanf("%d",&n);
 int i=1;
 ans=0;
 int tmp=1;
 for(;i<=n;i++)
 {
	 ans+=tmp;
	 if(ans>=1000000)ans-=1000000;
	 tmp=(tmp*(i+1))%1000000;
 }
 printf("%d\n",ans%1000000);
 return 0;
}
