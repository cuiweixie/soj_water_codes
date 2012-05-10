#include <stdio.h>
void print_bin(int a)
{
	int flags=0;
	int i=30;
	for(;i>=0;i--)
	{
		if(a&(1<<i))
		{
			flags=1;
			printf("1");
		}
		else
			if(flags)
				printf("0");
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		print_bin(n);
		if(n==0)
			printf("0");
		printf("\n");
	}
	return 0;
}
