#include <stdio.h>
#include <string.h>
int n,r;
#define N 2000
int head[N],vv[N],nxt[N],w[N];
int cc;
int cost[N];
int state[N];
void add_edge(int u,int v,int ww)
{
	nxt[cc]=head[u];
	head[u]=cc;
	vv[cc]=v;
	w[cc]=ww;
	cc++;
}
int dfs(int a,int ew)
{
		state[a]=1;
		int k;
		int sum=0;
		int leaf=1;
		for(k=head[a];k!=-1;k=nxt[k])
		{
			int v=vv[k];
			if(state[v]==0)
			{
          sum+=dfs(v,w[k]);
					leaf=0;
			}
		}
		if(leaf){
			cost[a]=ew;
			return cost[a];
		}
		cost[a]=ew>sum?sum:ew;
		return cost[a];
}
int main()
{
  while(scanf("%d%d",&n,&r))
	{
		if(n==0&&r==0) return 0;
		memset(head,-1,sizeof(head));
		memset(nxt,-1,sizeof(nxt));
		memset(cost,0,sizeof(cost));
		memset(state,0,sizeof(state));
		cc=0;
	int i,ll,rr,ww;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d%d",&ll,&rr,&ww);
		add_edge(ll,rr,ww);
		add_edge(rr,ll,ww);
	}
	int k;
	for(k=head[r];k!=-1;k=nxt[k])
	{
		state[r]=1;
		cost[r]+=dfs(vv[k],w[k]);
	}
	printf("%d\n",cost[r]);
	}
	return 0;
}
