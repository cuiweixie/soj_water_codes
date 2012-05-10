#include <stdio.h>
#include <string.h>
int g[100][100],in[100],out[100],tick=0,n,m,l,r;
int state[100];
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
void print(int i,int j)
{
	if(in[i]+1==in[j])
	{
		printf("edge (%d,%d) is Tree Edge\n",i+1,j+1);
	}
	else if(out[i]>in[j]&&out[i]<out[j])
	{
		printf("edge (%d,%d) is Back Edge\n",i+1,j+1);
	}
	else if(out[j]<out[i]&&in[j]>in[i])
	{
		printf("edge (%d,%d) is Down Edge\n",i+1,j+1);
	}
	else
		printf("edge (%d,%d) is Cross Edge\n",i+1,j+1);
}
int main()
{
	state[0]=1;
	scanf("%d%d",&n,&m);
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&l,&r);
		g[--l][--r]=1;
	}
	dfs(0);
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d%d",&l,&r);
		l--,r--;
		print(l,r);
	}
	return 0;
}
