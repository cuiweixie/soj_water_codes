#include <stdio.h>
int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n)&&m!=0&&n!=0)
	{
		int a=n-2*m,b=4*m-n;
		if(a%2==0&&b%2==0&&a>=0&&b>=0)
			printf("%d %d\n",b/2,a/2);
		else
			printf("No answer\n");
	}
	return 0;
}
