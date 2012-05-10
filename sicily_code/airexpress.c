#include <stdio.h>
int w[4],rate[4];
void solve(int pack)
{
	int i;
	for(i=0;i<4;i++)
	{
		if(pack<=w[i])
			break;
	}
  int min=pack*rate[i];
	int add=0;
	int j;
	for(j=i+1;j<4;j++)
	{
		if(min>(w[j-1]+1)*rate[j])
		{
			min=(w[j-1]+1)*rate[j];
			add=w[j-1]+1-pack;
		}
	}
	printf("Weight (%d) has best price $%d (add %d pounds)\n"\
			,pack,min,add);
}
int main()
{
	int t=0;
	while(scanf("%d",&w[0])!=EOF)
	{
		t++;
	  int i=0;
		for(;i<3;i++)scanf("%d %d",&rate[i],&w[i+1]);
		rate[3]=w[3];
		w[3]=10000;
		printf("Set number %d:\n",t);
		int pack;
		while(scanf("%d",&pack))
		{
			if(pack==0)break;
			solve(pack);
		}
		printf("\n");
	}
	return 0;
}
