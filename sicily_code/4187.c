
#include	<stdio.h>
#define abs(a) ((a)>0?(a):-(a))
int main()
{
	int t,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a+b>c&&c>abs(a-b))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
