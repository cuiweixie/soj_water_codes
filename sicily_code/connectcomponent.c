#include <stdio.h>
#include <string.h>
int g[100][100],in[100],out[100],tick=0,n,m,l,r;
int state[100];
int cc;
void dfs(int u)
{
	in[u]=tick++;
	int i=0;
	for(i=0;i<n;i++)
	{
		if(state[i]==0&&g[u][i]==1)
		{
			state[i]=1;
			dfs(i);
		}
	}
	out[u]=tick++;
}
void count()
{
	int i;
	for(i=0;i<n;i++)
	{
		if(state[i]==0)
		{
			state[i]=1;
			dfs(i);
			cc++;
		}
	}
}
int main()
{
 scanf("%d%d",&n,&m);
 while(m--)
 {
	 scanf("%d%d",&l,&r);
	 g[--l][--r]=1;
	 g[r][l]=1;
 }
 count();
 printf("%d\n",cc);
 return 0;
}
