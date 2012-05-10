#include <stdio.h>
#include <string.h>
int graph[1000][1000],n,m,t;
#define INF  (1000*1000)
int dist[1000];
int chose[1000];
int depth[1000];
void dijkstra()
{
	int i;
	for(i=0;i<n;i++)
		dist[i]=INF,chose[i]=0,depth[i]=0;
	dist[0]=0;
	int chosen=0,cc=0;
	while(chosen!=t&&cc<n)
	{
       chose[chosen]=1; 
			 for(i=0;i<n;i++)
			 {
				 if(depth[chosen]==10)break;
				 if(graph[chosen][i]!=INF&&chose[i]==0)
				 {
					 int tmp=dist[chosen]+graph[chosen][i];
					 if(tmp<dist[i])
					 {
						 dist[i]=tmp;
						 depth[i]=depth[chosen]+1;
					 }
				 }
			 }
			 int mmin=INF;
			 for(i=0;i<n;i++)
			 {
				 if(chose[i]==0)
				 {
					 if(dist[i]<mmin&&depth[i]<=10)
					 {
						 chosen=i;
						 mmin=dist[i];
					 }
				 }
			 }
			 cc++;
	}
}
int main()
{
	while(scanf("%d%d%d",&n,&m,&t))
	{
		if(n==0)return 0;
		int i,j,d;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(i!=j)graph[i][j]=INF;
			}
		while(m--)
		{
			scanf("%d%d%d",&i,&j,&d);
			if(d<graph[i][j])
				graph[i][j]=d;
		}
		dijkstra();
		if(dist[t]!=INF)
			printf("%d\n",dist[t]);
		else
			printf("no\n");

	}
	return 0;
}
