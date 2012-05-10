#include <stdio.h>
#define N 100000000
int next[N],code[N],cd,pd;
void get_next()
{
	int j=1,k=0;next[0]=-1,next[1]=0;
	while(j<cd-1)
	{
		if(code[j]==code[k])
		{
			next[j+1]=k+1;
			k++,j++;
		}
		else if(k==0)
		{
		  j++;
		}
		else
			k=next[k];
	}
}
int main()
{
	while(scanf("%d",&cd)!=EOF)
	{
		int i;
		for(i=0;i<cd;i++)scanf("%d",&code[i]);
		get_next();
		scanf("%d",&pd);
		int pi=0,ti=0;
		int tmp;
		int cc=0;
		scanf("%d",&tmp);
		cc++;
		while(pi<cd&&ti<pd)
		{
			if(code[pi]==tmp)
			{
				pi++,ti++;
				if(cc<pd)
				{
					cc++;
					scanf("%d",&tmp);
				}
			}
			else if(pi==0)
			{
				ti++;
				if(cc<pd)
				{
					cc++;
					scanf("%d",&tmp);
				}
			}
			else
				pi=next[pi];
		}
		for(;cc<pd;cc++)scanf("%d",&code[i]);
		if(pi==cd)
		{
			printf("%d\n",ti-cd);
		}
		else
		{
			printf("no solution\n");
		}
	}
	return 0;
}
