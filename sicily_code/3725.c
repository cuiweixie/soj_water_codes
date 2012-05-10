#include	<stdio.h>
int main()
{
	int n,max;
	while(scanf("%d",&n)&&n!=0)
	{
		scanf("%d",&max);
		while(--n)
		{
			int tmp;
			scanf("%d",&tmp);
			max=max>tmp?max:tmp;
		}
		printf("%d\n",max);
	}
	return 0;
}
